/**
 * GraphHopper Directions API
 * You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGGeocodingLocation.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGGeocodingLocation::SWGGeocodingLocation(QString* json) {
    init();
    this->fromJson(*json);
}

SWGGeocodingLocation::SWGGeocodingLocation() {
    init();
}

SWGGeocodingLocation::~SWGGeocodingLocation() {
    this->cleanup();
}

void
SWGGeocodingLocation::init() {
    point = new SWGGeocodingPoint();
    m_point_isSet = false;
    osm_id = new QString("");
    m_osm_id_isSet = false;
    osm_type = new QString("");
    m_osm_type_isSet = false;
    osm_key = new QString("");
    m_osm_key_isSet = false;
    name = new QString("");
    m_name_isSet = false;
    country = new QString("");
    m_country_isSet = false;
    city = new QString("");
    m_city_isSet = false;
    state = new QString("");
    m_state_isSet = false;
    street = new QString("");
    m_street_isSet = false;
    housenumber = new QString("");
    m_housenumber_isSet = false;
    postcode = new QString("");
    m_postcode_isSet = false;
}

void
SWGGeocodingLocation::cleanup() {
    if(point != nullptr) { 
        delete point;
    }
    if(osm_id != nullptr) { 
        delete osm_id;
    }
    if(osm_type != nullptr) { 
        delete osm_type;
    }
    if(osm_key != nullptr) { 
        delete osm_key;
    }
    if(name != nullptr) { 
        delete name;
    }
    if(country != nullptr) { 
        delete country;
    }
    if(city != nullptr) { 
        delete city;
    }
    if(state != nullptr) { 
        delete state;
    }
    if(street != nullptr) { 
        delete street;
    }
    if(housenumber != nullptr) { 
        delete housenumber;
    }
    if(postcode != nullptr) { 
        delete postcode;
    }
}

SWGGeocodingLocation*
SWGGeocodingLocation::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGGeocodingLocation::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&point, pJson["point"], "SWGGeocodingPoint", "SWGGeocodingPoint");
    
    ::Swagger::setValue(&osm_id, pJson["osm_id"], "QString", "QString");
    
    ::Swagger::setValue(&osm_type, pJson["osm_type"], "QString", "QString");
    
    ::Swagger::setValue(&osm_key, pJson["osm_key"], "QString", "QString");
    
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    
    ::Swagger::setValue(&country, pJson["country"], "QString", "QString");
    
    ::Swagger::setValue(&city, pJson["city"], "QString", "QString");
    
    ::Swagger::setValue(&state, pJson["state"], "QString", "QString");
    
    ::Swagger::setValue(&street, pJson["street"], "QString", "QString");
    
    ::Swagger::setValue(&housenumber, pJson["housenumber"], "QString", "QString");
    
    ::Swagger::setValue(&postcode, pJson["postcode"], "QString", "QString");
    
}

QString
SWGGeocodingLocation::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGGeocodingLocation::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
     
    if((point != nullptr) && (point->isSet())){
        toJsonValue(QString("point"), point, obj, QString("SWGGeocodingPoint"));
    }
    
    if(osm_id != nullptr && *osm_id != QString("")){
        toJsonValue(QString("osm_id"), osm_id, obj, QString("QString"));
    }
    
    if(osm_type != nullptr && *osm_type != QString("")){
        toJsonValue(QString("osm_type"), osm_type, obj, QString("QString"));
    }
    
    if(osm_key != nullptr && *osm_key != QString("")){
        toJsonValue(QString("osm_key"), osm_key, obj, QString("QString"));
    }
    
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    
    if(country != nullptr && *country != QString("")){
        toJsonValue(QString("country"), country, obj, QString("QString"));
    }
    
    if(city != nullptr && *city != QString("")){
        toJsonValue(QString("city"), city, obj, QString("QString"));
    }
    
    if(state != nullptr && *state != QString("")){
        toJsonValue(QString("state"), state, obj, QString("QString"));
    }
    
    if(street != nullptr && *street != QString("")){
        toJsonValue(QString("street"), street, obj, QString("QString"));
    }
    
    if(housenumber != nullptr && *housenumber != QString("")){
        toJsonValue(QString("housenumber"), housenumber, obj, QString("QString"));
    }
    
    if(postcode != nullptr && *postcode != QString("")){
        toJsonValue(QString("postcode"), postcode, obj, QString("QString"));
    }

    return obj;
}

SWGGeocodingPoint*
SWGGeocodingLocation::getPoint() {
    return point;
}
void
SWGGeocodingLocation::setPoint(SWGGeocodingPoint* point) {
    this->point = point;
    this->m_point_isSet = true;
}

QString*
SWGGeocodingLocation::getOsmId() {
    return osm_id;
}
void
SWGGeocodingLocation::setOsmId(QString* osm_id) {
    this->osm_id = osm_id;
    this->m_osm_id_isSet = true;
}

QString*
SWGGeocodingLocation::getOsmType() {
    return osm_type;
}
void
SWGGeocodingLocation::setOsmType(QString* osm_type) {
    this->osm_type = osm_type;
    this->m_osm_type_isSet = true;
}

QString*
SWGGeocodingLocation::getOsmKey() {
    return osm_key;
}
void
SWGGeocodingLocation::setOsmKey(QString* osm_key) {
    this->osm_key = osm_key;
    this->m_osm_key_isSet = true;
}

QString*
SWGGeocodingLocation::getName() {
    return name;
}
void
SWGGeocodingLocation::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

QString*
SWGGeocodingLocation::getCountry() {
    return country;
}
void
SWGGeocodingLocation::setCountry(QString* country) {
    this->country = country;
    this->m_country_isSet = true;
}

QString*
SWGGeocodingLocation::getCity() {
    return city;
}
void
SWGGeocodingLocation::setCity(QString* city) {
    this->city = city;
    this->m_city_isSet = true;
}

QString*
SWGGeocodingLocation::getState() {
    return state;
}
void
SWGGeocodingLocation::setState(QString* state) {
    this->state = state;
    this->m_state_isSet = true;
}

QString*
SWGGeocodingLocation::getStreet() {
    return street;
}
void
SWGGeocodingLocation::setStreet(QString* street) {
    this->street = street;
    this->m_street_isSet = true;
}

QString*
SWGGeocodingLocation::getHousenumber() {
    return housenumber;
}
void
SWGGeocodingLocation::setHousenumber(QString* housenumber) {
    this->housenumber = housenumber;
    this->m_housenumber_isSet = true;
}

QString*
SWGGeocodingLocation::getPostcode() {
    return postcode;
}
void
SWGGeocodingLocation::setPostcode(QString* postcode) {
    this->postcode = postcode;
    this->m_postcode_isSet = true;
}


bool 
SWGGeocodingLocation::isSet(){
    bool isObjectUpdated = false;
    do{
        if(point != nullptr && point->isSet()){ isObjectUpdated = true; break;}
        if(osm_id != nullptr && *osm_id != QString("")){ isObjectUpdated = true; break;}
        if(osm_type != nullptr && *osm_type != QString("")){ isObjectUpdated = true; break;}
        if(osm_key != nullptr && *osm_key != QString("")){ isObjectUpdated = true; break;}
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
        if(country != nullptr && *country != QString("")){ isObjectUpdated = true; break;}
        if(city != nullptr && *city != QString("")){ isObjectUpdated = true; break;}
        if(state != nullptr && *state != QString("")){ isObjectUpdated = true; break;}
        if(street != nullptr && *street != QString("")){ isObjectUpdated = true; break;}
        if(housenumber != nullptr && *housenumber != QString("")){ isObjectUpdated = true; break;}
        if(postcode != nullptr && *postcode != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

