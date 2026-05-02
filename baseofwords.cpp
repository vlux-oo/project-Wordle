#include "baseofwords.h"

BaseOfWords::BaseOfWords()
{
    srand(time(NULL));
    bd = QSqlDatabase::addDatabase("QSQLITE");
    bd.setDatabaseName("BaseOfWords.db");
    if (!bd.open())
    {
        qDebug() << "Oshibka brat, sorry";
        return;
    }
    QSqlQuery qer;
    qer.exec("DROP TABLE BaseOfWords;");
    qer.exec("CREATE TABLE BaseOfWords ("
             "id INTEGER PRIMARY KEY AUTOINCREMENT,"
             "let4 TEXT,"
             "let5 TEXT,"
             "let6 TEXT);");

        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('река', 'арбуз', 'рандом');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('куст', 'забор', 'анализ');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('мышь', 'ковёр', 'сборка');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('торт', 'слово', 'начало');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('плюс', 'число', 'кровля');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('банк', 'акула', 'деталь');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('беда', 'акциз', 'детант');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('блуд', 'акция', 'деташе');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('блин', 'алань', 'детдом');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('блик', 'аларм', 'детина');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('бета', 'алгол', 'детище');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('бинт', 'алеут', 'деткор');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('блок', 'алиби', 'детрит');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('бобр', 'алкаш', 'детсад');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('боль', 'аллах', 'дефект');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('болт', 'аллея', 'дефиле');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('брак', 'аллюр', 'дефолт');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('босс', 'алмаз', 'децима');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('брат', 'алтей', 'деяние');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('бред', 'алтын', 'джезва');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('бриз', 'алчба', 'джерси');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('брод', 'алыча', 'джигит');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('буря', 'альфа', 'джидда');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('брус', 'амбал', 'джинса');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('ваза', 'амбар', 'джинсы');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('вата', 'амбра', 'джирга');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('ввод', 'амбре', 'джирит');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('вдох', 'амвон', 'джихад');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('веко', 'ампер', 'джокер');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('вена', 'ампир', 'джонка');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('вера', 'амёба', 'джоуль');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('вещь', 'анаша', 'джунта');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('верх', 'анбар', 'дзерен');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('взор', 'ангар', 'диабаз');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('виза', 'ангел', 'диабет');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('визг', 'анзац', 'диавол');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('вина', 'анион', 'диакон');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('вино', 'анкер', 'диализ');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('вкус', 'анонс', 'диалог');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('вода', 'антал', 'диамат');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('воин', 'антей', 'диарея');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('воля', 'антей', 'диатез');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('ворс', 'антик', 'диафан');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('воск', 'антре', 'диафон');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('враг', 'анчар', 'диггер');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('врач', 'аорта', 'диграф');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('вред', 'апачи', 'диджей');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('глаз', 'апрош', 'диетик');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('глас', 'арака', 'дизайн');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('гнев', 'арбуз', 'дизель');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('гной', 'аргал', 'дикарь');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('гном', 'аргиш', 'диктат');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('гора', 'аргон', 'диктор');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('горб', 'аргус', 'дикуша');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('груз', 'ареал', 'дикция');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('губа', 'арека', 'динамо');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('дача', 'арена', 'диоптр');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('двор', 'арест', 'диорит');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('день', 'ариец', 'диоцез');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('джаз', 'аркад', 'диплом');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('джин', 'аркан', 'диплот');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('диез', 'армяк', 'диптих');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('диск', 'армия', 'дирхем');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('доза', 'армюр', 'дискос');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('долг', 'артос', 'диспут');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('доля', 'артус', 'дистих');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('дочь', 'архар', 'диурез');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('друг', 'архив', 'дичина');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('дуга', 'арчак', 'днёвка');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('дума', 'аршин', 'добряк');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('душа', 'асана', 'добыча');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('дыня', 'аскер', 'догляд');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('езда', 'аскет', 'доведь');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('жало', 'аспид', 'догмат');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('жара', 'астат', 'додача');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('жена', 'астма', 'доение');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('жест', 'аатра', 'дождик');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('зима', 'асцит', 'доилка');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('знак', 'аська', 'доимка');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('зола', 'атака', 'дойник');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('зона', 'атлас', 'доклад');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('зубр', 'атлет', 'доктор');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('кадр', 'атолл', 'докука');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('кара', 'атрий', 'долбня');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('карт', 'аттик', 'долбёж');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('квас', 'аудит', 'долдон');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('кедр', 'афган', 'должок');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('кино', 'афеня', 'долина');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('клад', 'афера', 'доллар');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('клан', 'афиша', 'долонь');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('клей', 'ахилл', 'долото');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('клик', 'ацтек', 'долька');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('клин', 'аэроб', 'домаха');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('клон', 'аэрон', 'домбра');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('клуб', 'бабай', 'домина');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('ключ', 'бабак', 'домино');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('клёв', 'бабец', 'домище');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('клён', 'бабка', 'домком');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('кнут', 'бабки', 'донжон');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('игла', 'бабьё', 'донник');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('игра', 'багаж', 'дончак');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('идея', 'багги', 'допинг');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('идол', 'багет', 'допрос');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('изюм', 'багно', 'допуск');");
        qer.exec("INSERT INTO BaseOfWords (let4, let5, let6) VALUES ('хвоя', 'багор', 'стакан');");
}

QString BaseOfWords::take_a_word(int kol)
{
    QSqlQuery qer;
    qer.exec("SELECT COUNT(*) FROM BaseOfWords");
    qer.next();
    int mid = qer.value(0).toInt();
    int random_id = rand() % mid;
    qer.prepare("SELECT * FROM BaseOfWords WHERE id = (:id)");
    qer.bindValue(":id", random_id);
    qer.exec();
    qer.next();
    if (kol == 4)
        return qer.value("let4").toString();
    else if (kol == 5)
        return qer.value("let5").toString();
    else if (kol == 6)
        return qer.value("let6").toString();
    return "error";
    // if (kol == 4)
    // {
    //     return "game";
    // }
    // else if (kol == 5)
    // {
    //     return "hello";
    // }
    // else if (kol == 6)
    // {
    //     return "return";
    // }
    // return "";
}
