#membuat database
#rumusnya create database nama_database;
create database tentara;

#menggunakan database
#rumusnya use nama_database;
use tentara;
 
#membuat tabel
#rumusnya create table nama_tabel (atributnya, tipedatanya, constraintnya);
create table pangkat (
kode_pangkat varchar(5) primary key not null,
nama_panglat varchar(30) not null,
ketrangan text null
);

#menampilkan struktur tabel
desc pangkat;

#menampilkan data didalam tabel
#rumusnya select * from nama_tabel
select * from pangkat;

#menambahkan data kedalam tabel(Insert);
#rumusnya insert into nama_tabelnya values (datanya);
#rumus lainnya insert into nama_tabelnya values (barisdata1), (barisdata2), (barisdata3);
insert into pangkat values
("B01","Prajurit","Disiplin"),
("B02","Jendral","Tukang Mabok");

#menghapus data didadalam tabel
#rumusnya : delete from nama_tabelnya where primary_keynya;
delete from pangkat where kode_pangkat="B02";

#mengedit atau mengubah data didalam tabel
#tidak bisa mengubah primary key 
#update nama_tabelnya set atribut_yang_ingin_diubah where primary_keynya:
update pangkat set nama_pangkat="Kopral" where kode_pangkat="B01";
