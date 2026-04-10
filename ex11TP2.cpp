class User {
// Porque é que os atributos estão em private ? - Para os dados estarem encapsulados, só podem ser acedidos através de get e set.
private:
 string username;
 string name;
 string country;
 vector<int> favoriteGenres;
 vector<TVSerie&> watchedSeries;
 vector<int> rating;
 vector<int> episodesWatched;
public:

// Que função é esta? O que faz? - É um construtor da classe, iniciliaza o objeto e atribui valores.
 User(string uname,string completename, string usercountry, vector<int>
genres) {}
 // Estas 3 funções servem para … para escrever a informação dos objeto (setters)
 void setUsername(string user) {}
 void setName(string name) {}
 void setCountry(string country) {}

// Para que serve ter o const nestas funções ? - A função não modifica o objeto.
 string getUsername() const {}
 string getName() const {}
 string getCountry() const {}
 vector<int> getFavoriteGenres() const {}
 vector<TVSerie&> getWatchedSeries() const {}
 vector<int> getRating() const {}
 vector<int> getEpisodesWatched() const {}
 void addFavoriteGenre(string genre) {}
 void addWatchedSeries(TVSerie& series) {}
 void addRating(TVSerie Tv,float rating) {}
 void addEpisodesWatched(TVSerie Tv,int n) {}