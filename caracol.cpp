#include "caracol.h"

Caracol::Caracol(){
	this->x = 0;
    this->y = 0;
    this->velocidade = 0;
    this->altura = 0;
    this->largura = 0;

	this->desejo = aleatorio(0, 3); // aleat�rio!
	
    if(desejo == chocolate)
        imagem = al_load_bitmap("c_chocolate.png");
    else if(desejo == sushi)
        imagem = al_load_bitmap("c_sushi.png");
    else if(desejo == pizza)
        imagem = al_load_bitmap("c_pizza.png");
    else if(desejo == hotdog)
        imagem = al_load_bitmap("c_hotdog.png");

}

Caracol::Caracol(int x, int y, int velocidade, int altura, int largura){
    this->x = x;
    this->y = y;
    this->velocidade = velocidade;
    this->altura = altura;
    this->largura = largura;

    // this->desejo = aleatorio(0, 3); // aleat�rio!
	this->desejo = hotdog;
	
    if(desejo == chocolate)
        imagem = al_load_bitmap("c_chocolate.png");
    else if(desejo == sushi)
        imagem = al_load_bitmap("c_sushi.png");
    else if(desejo == pizza)
        imagem = al_load_bitmap("c_pizza.png");
    else if(desejo == hotdog)
        imagem = al_load_bitmap("c_hotdog.png");
}

Caracol::~Caracol(){
	al_destroy_bitmap(imagem);
}
    

void Caracol::andar(){
    x += velocidade;
}

void Caracol::desenhar(){
    al_draw_bitmap(imagem, x-largura/2, y-altura/2, 0);
    //al_convert_mask_to_alpha(imagem, al_map_rgb(255, 0, 0));
}

// getters e setters:

int Caracol::getX(){
	return x;
}
void Caracol::setX(int x){
	this->x = x;
}

int Caracol::getY(){
	return y;
}
void Caracol::setY(int y){
	this->y = y;
}

int Caracol::getVelocidade(){
	return velocidade;
}
void Caracol::setVelocidade(int v){
	velocidade = v;
}

int Caracol::getAltura(){
	return altura;
}
void Caracol::setAltura(int a){
	altura = a;
}

int Caracol::getLargura(){
	return largura;
}
void Caracol::setLargura(int l){
	largura = l;
}

int Caracol::getDesejo(){
	return desejo;
}
void Caracol::setDesejo(int desejo){
	this->desejo = desejo;
	if(desejo == chocolate)
        imagem = al_load_bitmap("c_chocolate.png");
    else if(desejo == sushi)
        imagem = al_load_bitmap("c_sushi.png");
    else if(desejo == pizza)
        imagem = al_load_bitmap("c_pizza.png");
    else if(desejo == hotdog)
        imagem = al_load_bitmap("c_hotdog.png");
}

ALLEGRO_BITMAP* Caracol::getImagem(){
	return imagem;
}
