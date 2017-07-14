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


#include "SWGRouteResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGRouteResponse::SWGRouteResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGRouteResponse::SWGRouteResponse() {
    init();
}

SWGRouteResponse::~SWGRouteResponse() {
    this->cleanup();
}

void
SWGRouteResponse::init() {
    paths = new QList<SWGRouteResponsePath*>();
    info = new SWGResponseInfo();
}

void
SWGRouteResponse::cleanup() {
    
    if(paths != nullptr) {
        QList<SWGRouteResponsePath*>* arr = paths;
        foreach(SWGRouteResponsePath* o, *arr) {
            delete o;
        }
        delete paths;
    }

    if(info != nullptr) {
        delete info;
    }
}

SWGRouteResponse*
SWGRouteResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGRouteResponse::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&paths, pJson["paths"], "QList", "SWGRouteResponsePath");
    
    ::Swagger::setValue(&info, pJson["info"], "SWGResponseInfo", "SWGResponseInfo");
}

QString
SWGRouteResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGRouteResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray pathsJsonArray;
    toJsonArray((QList<void*>*)paths, &pathsJsonArray, "paths", "SWGRouteResponsePath");
    obj->insert("paths", pathsJsonArray);

    toJsonValue(QString("info"), info, obj, QString("SWGResponseInfo"));

    return obj;
}

QList<SWGRouteResponsePath*>*
SWGRouteResponse::getPaths() {
    return paths;
}
void
SWGRouteResponse::setPaths(QList<SWGRouteResponsePath*>* paths) {
    this->paths = paths;
}

SWGResponseInfo*
SWGRouteResponse::getInfo() {
    return info;
}
void
SWGRouteResponse::setInfo(SWGResponseInfo* info) {
    this->info = info;
}



} /* namespace Swagger */
