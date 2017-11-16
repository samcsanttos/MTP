#include <stdio.h>
#include <stdlib.h>

typedef struct xponto {
	float x;
	float y;
} Ponto;

typedef struct xpolig {
	int nvertices;
	Ponto * vertices;
} Poligon;

Poligon recebePontos(int npontos);
float calcArea(Poligon poligono);
Ponto calcCentroide(Poligon poligono);
void imprimePonto(Ponto p);
void imprimePoligono(Poligon P);

int main() {
	Poligon * poligonos;
	int i, npoligonos, npontos;
	printf("Quantos poligonos? ");
	scanf("%d", &npoligonos);
	printf("\n");
	poligonos = (Poligon *) calloc(npoligonos, sizeof(Poligon));
	for(i = 0; i < npoligonos; i++) {
		printf("Quantos vertices tem o poligono %d? ", i+1);
		scanf("%d", &npontos);
		poligonos[i] = recebePontos(npontos);
	}
	printf("\n:: Analises :::::::::::::::::::::\n");
	for(i = 0; i < npoligonos; i++) {
		printf("%d.) ", i+1);
		imprimePoligono(poligonos[i]);
		printf("Tem centroide em ");
		imprimePonto(calcCentroide(poligonos[i]));
		printf(" e Area igual a %g\n", calcArea(poligonos[i]));
	}
	for(i = 0; i < npoligonos; i++)
		free(poligonos[i].vertices);
	free(poligonos);
	return 0;
}

Poligon recebePontos(int npontos) {
	Poligon poligono;
	int i;
	poligono.nvertices = npontos;
	poligono.vertices = (Ponto *) calloc(npontos, sizeof(Ponto));
	printf("Entre com coordenadas separadas por espaço,\n");
	printf("com vertices em sequencia anti-horaria ...\n");
	for(i = 0; i < npontos; i++) {
		printf("Entre com o %do ponto: ", i+1);
		scanf("%f %f", &(poligono.vertices[i].x),
			&(poligono.vertices[i].y));
	}
	return poligono;
}

float calcArea(Poligon poligono) {
	float soma = 0.f;
	int i, ultimo = poligono.nvertices - 1;
	for(i = 0; i < ultimo; i++)
		soma += poligono.vertices[i].x*poligono.vertices[i+1].y -
			poligono.vertices[i+1].x*poligono.vertices[i].y;
	soma += poligono.vertices[ultimo].x*poligono.vertices[0].y -
		poligono.vertices[0].x*poligono.vertices[ultimo].y;
	return 0.5*soma;
}

Ponto calcCentroide(Poligon poligono) {
	Ponto centroide;
	int i;
	float somax = 0.f, somay = 0.f;
	for(i = 0; i < poligono.nvertices; i++) {
		somax += poligono.vertices[i].x;
		somay += poligono.vertices[i].y;
	}
	centroide.x = somax/poligono.nvertices;
	centroide.y = somay/poligono.nvertices;
	return centroide;
}

void imprimePonto(Ponto p) {
	printf("(%g, %g)", p.x, p.y);
}

void imprimePoligono(Poligon P) {
	int i;
	printf("Qtde vertices: %d; Vertices: ", P.nvertices);
	for(i = 0; i < P.nvertices; i++) {
		imprimePonto(P.vertices[i]);
		printf(" ");
	}
	printf("\n");
}