/*
Autore:Casini Lorenzo
versione 2.1.3
*/
/*
ESERCIZIO 2

Predisporre una libreria di gestione del tipo di dato astratto PILA e del tipo di dato astratto CODA implementati tramite allocazione indicizzata,
tramite strutture collegate e sfruttando la libreria scritta sulle liste. Le funzioni che, come minimo, dovranno essere implementate sono: push, pop,
ed empty per la pila e inserisci in coda, estrai dalla coda, coda vuota per la coda. Il programma deve visualizzare lo stato della coda o della
pila ad inizio esecuzione (vuota) e dopo ogni operazione scelta dall'utente, come nell'esercizio precedente.
*/
#define MAX 10
#define VUOTA -1
#define INDEF -2



struct Lista_malloc
{
    int* vettore;
    int size;
    int last;
};

struct Lista_colleg
{
    int num;
    struct Lista_colleg* next;
};


int Inizializza( struct Lista_malloc *ld, int dim);
void StampaDinamica(struct Lista_malloc ld);
int AggiungiDinamica(struct Lista_malloc *ld, int elem);
void MoreSize(struct Lista_malloc *ld);
int CodaDinamica(struct Lista_malloc *ld, int elem);
int AggiungiDopo(struct Lista_malloc *ld, int pos, int elem);
int CancPrimoDinamico(struct Lista_malloc *ld);
int CancUltimoDinamico(struct Lista_malloc *ld);
int CancellaElem(struct Lista_malloc *ld, int elem);

int Addhead_link(struct Lista_colleg **testa, int elem);
void Stampa_link(struct Lista_colleg *testa);
int Addafter_link(struct Lista_colleg **testa, int elem, int elem_dacercare);
int Addlast_link(struct Lista_colleg **testa, int elem);
int DeleteHead_link(struct Lista_colleg **testa);
int Delete_link(struct Lista_colleg **testa, int elem_dacercare);
int DeleteLast_link(struct Lista_colleg **testa);
