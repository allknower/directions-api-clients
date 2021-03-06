//
// GeocodingLocation.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class GeocodingLocation: JSONEncodable {
    public var point: GeocodingPoint?
    /** OSM Id */
    public var osmId: String?
    /** N &#x3D; node, R &#x3D; relation, W &#x3D; way */
    public var osmType: String?
    /** The osm key of the result like &#x60;place&#x60; or &#x60;amenity&#x60; */
    public var osmKey: String?
    public var name: String?
    public var country: String?
    public var city: String?
    public var state: String?
    public var street: String?
    public var housenumber: String?
    public var postcode: String?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["point"] = self.point?.encodeToJSON()
        nillableDictionary["osm_id"] = self.osmId
        nillableDictionary["osm_type"] = self.osmType
        nillableDictionary["osm_key"] = self.osmKey
        nillableDictionary["name"] = self.name
        nillableDictionary["country"] = self.country
        nillableDictionary["city"] = self.city
        nillableDictionary["state"] = self.state
        nillableDictionary["street"] = self.street
        nillableDictionary["housenumber"] = self.housenumber
        nillableDictionary["postcode"] = self.postcode
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
