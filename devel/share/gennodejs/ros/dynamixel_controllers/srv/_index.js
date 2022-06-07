
"use strict";

let SetComplianceMargin = require('./SetComplianceMargin.js')
let TorqueEnable = require('./TorqueEnable.js')
let SetComplianceSlope = require('./SetComplianceSlope.js')
let SetCompliancePunch = require('./SetCompliancePunch.js')
let SetTorqueLimit = require('./SetTorqueLimit.js')
let SetSpeed = require('./SetSpeed.js')
let StartController = require('./StartController.js')
let RestartController = require('./RestartController.js')
let StopController = require('./StopController.js')

module.exports = {
  SetComplianceMargin: SetComplianceMargin,
  TorqueEnable: TorqueEnable,
  SetComplianceSlope: SetComplianceSlope,
  SetCompliancePunch: SetCompliancePunch,
  SetTorqueLimit: SetTorqueLimit,
  SetSpeed: SetSpeed,
  StartController: StartController,
  RestartController: RestartController,
  StopController: StopController,
};
