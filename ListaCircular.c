#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct no {
  int info;
  struct no *prox;
} def_lista;

def_lista *cria_no(int numero) {
  def_lista *novoNo = malloc(sizeof(def_lista));
  if (novoNo) {
    novoNo->info = numero;
    novoNo->prox = NULL;
  }
  return novoNo;
}

void insere_inicio(def_lista **Lista, int numero) {
  def_lista *novoNo = cria_no(numero);
  if (novoNo) {
    if (*Lista == NULL) {
      *Lista = novoNo;
      novoNo->prox = *Lista;
    } else {
      novoNo->prox = (*Lista)->prox;
      (*Lista)->prox = novoNo;
    }
  }
}

void insere_final(def_lista **Lista, int numero) {
  def_lista *novoNo = cria_no(numero);
  if (novoNo) {
    if (*Lista == NULL) {
      *Lista = novoNo;
      novoNo->prox = *Lista;
    } else {
      novoNo->prox = (*Lista)->prox;
      (*Lista)->prox = novoNo;
      (*Lista) = novoNo; 
    }
  }
}

void imprime_lista(def_lista *Lista) {
  def_lista *aux;
  aux = Lista->prox;
  if (Lista == NULL) {
    printf("Lista vazia\n");
    return;
  }
  do {
    printf("%d\t", aux->info);
    aux = aux->prox;
  } while (aux != Lista->prox);
  printf("\n\n");
}

bool remove_inicio(def_lista **Lista, int *numero) {
  def_lista *aux;
  if (*Lista == NULL) {
    return false;
  } else {
    aux = (*Lista)->prox;
    *numero = aux->info;
    if (aux == *Lista) { 
      *Lista = NULL;
    } else {
      (*Lista)->prox = aux->prox;
    }
    free(aux);
    return true;
  }
}

bool remove_final(def_lista **Lista, int *numero) {
  def_lista *aux, *penultimo;
  if (*Lista == NULL) {
    return false;
  } else {
    if ((*Lista)->prox == *Lista) { 
      *numero = (*Lista)->info;
      free(*Lista);
      *Lista = NULL;
      return true;
    }
    aux = *Lista;
    penultimo = NULL;
    while (aux->prox != *Lista) {
      penultimo = aux;
      aux = aux->prox;
    }
    *numero = aux->info;
    penultimo->prox = NULL; 
    free(aux);
    return true;
  }
}
