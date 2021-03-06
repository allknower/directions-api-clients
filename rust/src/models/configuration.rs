/* 
 * GraphHopper Directions API
 *
 * You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
 *
 * OpenAPI spec version: 1.0.0
 * 
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct Configuration {
  #[serde(rename = "routing")]
  routing: Option<::models::Routing>
}

impl Configuration {
  pub fn new() -> Configuration {
    Configuration {
      routing: None
    }
  }

  pub fn set_routing(&mut self, routing: ::models::Routing) {
    self.routing = Some(routing);
  }

  pub fn with_routing(mut self, routing: ::models::Routing) -> Configuration {
    self.routing = Some(routing);
    self
  }

  pub fn routing(&self) -> Option<&::models::Routing> {
    self.routing.as_ref()
  }

  pub fn reset_routing(&mut self) {
    self.routing = None;
  }

}



