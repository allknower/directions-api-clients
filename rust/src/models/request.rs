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
pub struct Request {
  /// An array of vehicles that can be employed
  #[serde(rename = "vehicles")]
  vehicles: Option<Vec<::models::Vehicle>>,
  /// An array of vehicle types
  #[serde(rename = "vehicle_types")]
  vehicle_types: Option<Vec<::models::VehicleType>>,
  /// An array of services
  #[serde(rename = "services")]
  services: Option<Vec<::models::Service>>,
  /// An array of shipments
  #[serde(rename = "shipments")]
  shipments: Option<Vec<::models::Shipment>>,
  /// An array of relations
  #[serde(rename = "relations")]
  relations: Option<Vec<::models::Relation>>,
  /// An array of objectives
  #[serde(rename = "objectives")]
  objectives: Option<Vec<::models::Objective>>,
  /// An array of cost matrices
  #[serde(rename = "cost_matrices")]
  cost_matrices: Option<Vec<::models::CostMatrix>>,
  #[serde(rename = "configuration")]
  configuration: Option<::models::Configuration>
}

impl Request {
  pub fn new() -> Request {
    Request {
      vehicles: None,
      vehicle_types: None,
      services: None,
      shipments: None,
      relations: None,
      objectives: None,
      cost_matrices: None,
      configuration: None
    }
  }

  pub fn set_vehicles(&mut self, vehicles: Vec<::models::Vehicle>) {
    self.vehicles = Some(vehicles);
  }

  pub fn with_vehicles(mut self, vehicles: Vec<::models::Vehicle>) -> Request {
    self.vehicles = Some(vehicles);
    self
  }

  pub fn vehicles(&self) -> Option<&Vec<::models::Vehicle>> {
    self.vehicles.as_ref()
  }

  pub fn reset_vehicles(&mut self) {
    self.vehicles = None;
  }

  pub fn set_vehicle_types(&mut self, vehicle_types: Vec<::models::VehicleType>) {
    self.vehicle_types = Some(vehicle_types);
  }

  pub fn with_vehicle_types(mut self, vehicle_types: Vec<::models::VehicleType>) -> Request {
    self.vehicle_types = Some(vehicle_types);
    self
  }

  pub fn vehicle_types(&self) -> Option<&Vec<::models::VehicleType>> {
    self.vehicle_types.as_ref()
  }

  pub fn reset_vehicle_types(&mut self) {
    self.vehicle_types = None;
  }

  pub fn set_services(&mut self, services: Vec<::models::Service>) {
    self.services = Some(services);
  }

  pub fn with_services(mut self, services: Vec<::models::Service>) -> Request {
    self.services = Some(services);
    self
  }

  pub fn services(&self) -> Option<&Vec<::models::Service>> {
    self.services.as_ref()
  }

  pub fn reset_services(&mut self) {
    self.services = None;
  }

  pub fn set_shipments(&mut self, shipments: Vec<::models::Shipment>) {
    self.shipments = Some(shipments);
  }

  pub fn with_shipments(mut self, shipments: Vec<::models::Shipment>) -> Request {
    self.shipments = Some(shipments);
    self
  }

  pub fn shipments(&self) -> Option<&Vec<::models::Shipment>> {
    self.shipments.as_ref()
  }

  pub fn reset_shipments(&mut self) {
    self.shipments = None;
  }

  pub fn set_relations(&mut self, relations: Vec<::models::Relation>) {
    self.relations = Some(relations);
  }

  pub fn with_relations(mut self, relations: Vec<::models::Relation>) -> Request {
    self.relations = Some(relations);
    self
  }

  pub fn relations(&self) -> Option<&Vec<::models::Relation>> {
    self.relations.as_ref()
  }

  pub fn reset_relations(&mut self) {
    self.relations = None;
  }

  pub fn set_objectives(&mut self, objectives: Vec<::models::Objective>) {
    self.objectives = Some(objectives);
  }

  pub fn with_objectives(mut self, objectives: Vec<::models::Objective>) -> Request {
    self.objectives = Some(objectives);
    self
  }

  pub fn objectives(&self) -> Option<&Vec<::models::Objective>> {
    self.objectives.as_ref()
  }

  pub fn reset_objectives(&mut self) {
    self.objectives = None;
  }

  pub fn set_cost_matrices(&mut self, cost_matrices: Vec<::models::CostMatrix>) {
    self.cost_matrices = Some(cost_matrices);
  }

  pub fn with_cost_matrices(mut self, cost_matrices: Vec<::models::CostMatrix>) -> Request {
    self.cost_matrices = Some(cost_matrices);
    self
  }

  pub fn cost_matrices(&self) -> Option<&Vec<::models::CostMatrix>> {
    self.cost_matrices.as_ref()
  }

  pub fn reset_cost_matrices(&mut self) {
    self.cost_matrices = None;
  }

  pub fn set_configuration(&mut self, configuration: ::models::Configuration) {
    self.configuration = Some(configuration);
  }

  pub fn with_configuration(mut self, configuration: ::models::Configuration) -> Request {
    self.configuration = Some(configuration);
    self
  }

  pub fn configuration(&self) -> Option<&::models::Configuration> {
    self.configuration.as_ref()
  }

  pub fn reset_configuration(&mut self) {
    self.configuration = None;
  }

}



