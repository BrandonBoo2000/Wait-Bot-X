
"use strict";

let KeyboardInput = require('./KeyboardInput.js');
let BumperEvent = require('./BumperEvent.js');
let PowerSystemEvent = require('./PowerSystemEvent.js');
let Sound = require('./Sound.js');
let RobotStateEvent = require('./RobotStateEvent.js');
let ScanAngle = require('./ScanAngle.js');
let ExternalPower = require('./ExternalPower.js');
let DigitalOutput = require('./DigitalOutput.js');
let VersionInfo = require('./VersionInfo.js');
let DigitalInputEvent = require('./DigitalInputEvent.js');
let ControllerInfo = require('./ControllerInfo.js');
let ButtonEvent = require('./ButtonEvent.js');
let MotorPower = require('./MotorPower.js');
let CliffEvent = require('./CliffEvent.js');
let WheelDropEvent = require('./WheelDropEvent.js');
let DockInfraRed = require('./DockInfraRed.js');
let Led = require('./Led.js');
let SensorState = require('./SensorState.js');
let AutoDockingActionGoal = require('./AutoDockingActionGoal.js');
let AutoDockingActionResult = require('./AutoDockingActionResult.js');
let AutoDockingActionFeedback = require('./AutoDockingActionFeedback.js');
let AutoDockingAction = require('./AutoDockingAction.js');
let AutoDockingGoal = require('./AutoDockingGoal.js');
let AutoDockingFeedback = require('./AutoDockingFeedback.js');
let AutoDockingResult = require('./AutoDockingResult.js');

module.exports = {
  KeyboardInput: KeyboardInput,
  BumperEvent: BumperEvent,
  PowerSystemEvent: PowerSystemEvent,
  Sound: Sound,
  RobotStateEvent: RobotStateEvent,
  ScanAngle: ScanAngle,
  ExternalPower: ExternalPower,
  DigitalOutput: DigitalOutput,
  VersionInfo: VersionInfo,
  DigitalInputEvent: DigitalInputEvent,
  ControllerInfo: ControllerInfo,
  ButtonEvent: ButtonEvent,
  MotorPower: MotorPower,
  CliffEvent: CliffEvent,
  WheelDropEvent: WheelDropEvent,
  DockInfraRed: DockInfraRed,
  Led: Led,
  SensorState: SensorState,
  AutoDockingActionGoal: AutoDockingActionGoal,
  AutoDockingActionResult: AutoDockingActionResult,
  AutoDockingActionFeedback: AutoDockingActionFeedback,
  AutoDockingAction: AutoDockingAction,
  AutoDockingGoal: AutoDockingGoal,
  AutoDockingFeedback: AutoDockingFeedback,
  AutoDockingResult: AutoDockingResult,
};
