#include "internals/enums.h"

#include "Tactical/Animation_Control.h"
#include "Tactical/Soldier_Control.h"

/** Return approach name or NULL if not found. */
const char* Internals::getApproachName(enum Approach approach)
{
  switch(approach)
  {
  case APPROACH_NONE:                           return "APPROACH_NONE";
  case APPROACH_FRIENDLY:                       return "APPROACH_FRIENDLY";
  case APPROACH_DIRECT:                         return "APPROACH_DIRECT";
  case APPROACH_THREATEN:                       return "APPROACH_THREATEN";
  case APPROACH_RECRUIT:                        return "APPROACH_RECRUIT";
  case APPROACH_REPEAT:                         return "APPROACH_REPEAT";
  case APPROACH_GIVINGITEM:                     return "APPROACH_GIVINGITEM";
  case NPC_INITIATING_CONV:                     return "NPC_INITIATING_CONV";
  case NPC_INITIAL_QUOTE:                       return "NPC_INITIAL_QUOTE";
  case NPC_WHOAREYOU:                           return "NPC_WHOAREYOU";
  case TRIGGER_NPC:                             return "TRIGGER_NPC";
  case APPROACH_GIVEFIRSTAID:                   return "APPROACH_GIVEFIRSTAID";
  case APPROACH_SPECIAL_INITIAL_QUOTE:          return "APPROACH_SPECIAL_INITIAL_QUOTE";
  case APPROACH_ENEMY_NPC_QUOTE:                return "APPROACH_ENEMY_NPC_QUOTE";
  case APPROACH_DECLARATION_OF_HOSTILITY:       return "APPROACH_DECLARATION_OF_HOSTILITY";
  case APPROACH_EPC_IN_WRONG_SECTOR:            return "APPROACH_EPC_IN_WRONG_SECTOR";
  case APPROACH_EPC_WHO_IS_RECRUITED:           return "APPROACH_EPC_WHO_IS_RECRUITED";
  case APPROACH_INITIAL_QUOTE:                  return "APPROACH_INITIAL_QUOTE";
  case APPROACH_CLOSING_SHOP:                   return "APPROACH_CLOSING_SHOP";
  case APPROACH_SECTOR_NOT_SAFE:                return "APPROACH_SECTOR_NOT_SAFE";
  case APPROACH_DONE_SLAPPED:                   return "APPROACH_DONE_SLAPPED";
  case APPROACH_DONE_PUNCH_0:                   return "APPROACH_DONE_PUNCH_0";
  case APPROACH_DONE_PUNCH_1:                   return "APPROACH_DONE_PUNCH_1";
  case APPROACH_DONE_PUNCH_2:                   return "APPROACH_DONE_PUNCH_2";
  case APPROACH_DONE_OPEN_STRUCTURE:            return "APPROACH_DONE_OPEN_STRUCTURE";
  case APPROACH_DONE_GET_ITEM:                  return "APPROACH_DONE_GET_ITEM";
  case APPROACH_DONE_GIVING_ITEM:               return "APPROACH_DONE_GIVING_ITEM";
  case APPROACH_DONE_TRAVERSAL:                 return "APPROACH_DONE_TRAVERSAL";
  case APPROACH_BUYSELL:                        return "APPROACH_BUYSELL";
  case APPROACH_ONE_OF_FOUR_STANDARD:           return "APPROACH_ONE_OF_FOUR_STANDARD";
  case APPROACH_FRIENDLY_DIRECT_OR_RECRUIT:     return "APPROACH_FRIENDLY_DIRECT_OR_RECRUIT";
  default:                                      return NULL;
  }
}

const char* Internals::getActionName(UINT8 action)
{
  switch(action)
  {
  case MERC_OPENDOOR:                   return "OPENDOOR";
  case MERC_OPENSTRUCT:                 return "OPENSTRUCT";
  case MERC_PICKUPITEM:                 return "PICKUPITEM";
  case MERC_PUNCH:                      return "PUNCH";
  case MERC_KNIFEATTACK:                return "KNIFEATTACK";
  case MERC_GIVEAID:                    return "GIVEAID";
  case MERC_GIVEITEM:                   return "GIVEITEM";
  case MERC_WAITFOROTHERSTOTRIGGER:     return "WAITFOROTHERSTOTRIGGER";
  case MERC_CUTFFENCE:                  return "CUTFFENCE";
  case MERC_DROPBOMB:                   return "DROPBOMB";
  case MERC_STEAL:                      return "STEAL";
  case MERC_TALK:                       return "TALK";
  case MERC_ENTER_VEHICLE:              return "ENTER_VEHICLE";
  case MERC_REPAIR:                     return "REPAIR";
  case MERC_RELOADROBOT:                return "RELOADROBOT";
  case MERC_TAKEBLOOD:                  return "TAKEBLOOD";
  case MERC_ATTACH_CAN:                 return "ATTACH_CAN";
  case MERC_FUEL_VEHICLE:               return "FUEL_VEHICLE";
  case NO_PENDING_ACTION:               return "NOTHING";
  default:                              return "???";
  }
}

/** Get animation name. */
const char* Internals::getAnimationName(UINT16 animation)
{
  switch(animation)
  {
  case WALKING:                         return "WALKING";
  case STANDING:                        return "STANDING";
  case KNEEL_DOWN:                      return "KNEEL_DOWN";
  case CROUCHING:                       return "CROUCHING";
  case KNEEL_UP:                        return "KNEEL_UP";
  case SWATTING:                        return "SWATTING";
  case RUNNING:                         return "RUNNING";
  case PRONE_DOWN:                      return "PRONE_DOWN";
  case CRAWLING:                        return "CRAWLING";
  case PRONE_UP:                        return "PRONE_UP";
  case PRONE:                           return "PRONE";
  case READY_RIFLE_STAND:               return "READY_RIFLE_STAND";
  case AIM_RIFLE_STAND:                 return "AIM_RIFLE_STAND";
  case SHOOT_RIFLE_STAND:               return "SHOOT_RIFLE_STAND";
  case END_RIFLE_STAND:                 return "END_RIFLE_STAND";
  case START_SWAT:                      return "START_SWAT";
  case END_SWAT:                        return "END_SWAT";
  case FLYBACK_HIT:                     return "FLYBACK_HIT";
  case READY_RIFLE_PRONE:               return "READY_RIFLE_PRONE";
  case AIM_RIFLE_PRONE:                 return "AIM_RIFLE_PRONE";
  case SHOOT_RIFLE_PRONE:               return "SHOOT_RIFLE_PRONE";
  case END_RIFLE_PRONE:                 return "END_RIFLE_PRONE";
  case FALLBACK_DEATHTWICH:             return "FALLBACK_DEATHTWICH";
  case GENERIC_HIT_STAND:               return "GENERIC_HIT_STAND";
  case FLYBACK_HIT_BLOOD_STAND:         return "FLYBACK_HIT_BLOOD_STAND";
  case FLYBACK_HIT_DEATH:               return "FLYBACK_HIT_DEATH";
  case READY_RIFLE_CROUCH:              return "READY_RIFLE_CROUCH";
  case AIM_RIFLE_CROUCH:                return "AIM_RIFLE_CROUCH";
  case SHOOT_RIFLE_CROUCH:              return "SHOOT_RIFLE_CROUCH";
  case END_RIFLE_CROUCH:                return "END_RIFLE_CROUCH";
  case FALLBACK_HIT_STAND:              return "FALLBACK_HIT_STAND";
  case ROLLOVER:                        return "ROLLOVER";
  case CLIMBUPROOF:                     return "CLIMBUPROOF";
  case FALLOFF:                         return "FALLOFF";
  case GETUP_FROM_ROLLOVER:             return "GETUP_FROM_ROLLOVER";
  case CLIMBDOWNROOF:                   return "CLIMBDOWNROOF";
  case FALLFORWARD_ROOF:                return "FALLFORWARD_ROOF";
  case GENERIC_HIT_DEATHTWITCHNB:       return "GENERIC_HIT_DEATHTWITCHNB";
  case GENERIC_HIT_DEATHTWITCHB:        return "GENERIC_HIT_DEATHTWITCHB";
  case FALLBACK_HIT_DEATHTWITCHNB:      return "FALLBACK_HIT_DEATHTWITCHNB";
  case FALLBACK_HIT_DEATHTWITCHB:       return "FALLBACK_HIT_DEATHTWITCHB";
  case GENERIC_HIT_DEATH:               return "GENERIC_HIT_DEATH";
  case FALLBACK_HIT_DEATH:              return "FALLBACK_HIT_DEATH";
  case GENERIC_HIT_CROUCH:              return "GENERIC_HIT_CROUCH";
  case STANDING_BURST:                  return "STANDING_BURST";
  case STANDING_BURST_HIT:              return "STANDING_BURST_HIT";
  case FALLFORWARD_FROMHIT_STAND:       return "FALLFORWARD_FROMHIT_STAND";
  case FALLFORWARD_FROMHIT_CROUCH:      return "FALLFORWARD_FROMHIT_CROUCH";
  case ENDFALLFORWARD_FROMHIT_CROUCH:   return "ENDFALLFORWARD_FROMHIT_CROUCH";
  case GENERIC_HIT_PRONE:               return "GENERIC_HIT_PRONE";
  case PRONE_HIT_DEATH:                 return "PRONE_HIT_DEATH";
  case PRONE_LAY_FROMHIT:               return "PRONE_LAY_FROMHIT";
  case PRONE_HIT_DEATHTWITCHNB:         return "PRONE_HIT_DEATHTWITCHNB";
  case PRONE_HIT_DEATHTWITCHB:          return "PRONE_HIT_DEATHTWITCHB";
  case ADULTMONSTER_BREATHING:          return "ADULTMONSTER_BREATHING";
  case ADULTMONSTER_WALKING:            return "ADULTMONSTER_WALKING";
  case ADULTMONSTER_ATTACKING:          return "ADULTMONSTER_ATTACKING";
  case FLYBACK_HITDEATH_STOP:           return "FLYBACK_HITDEATH_STOP";
  case FALLFORWARD_HITDEATH_STOP:       return "FALLFORWARD_HITDEATH_STOP";
  case FALLBACK_HITDEATH_STOP:          return "FALLBACK_HITDEATH_STOP";
  case PRONE_HITDEATH_STOP:             return "PRONE_HITDEATH_STOP";
  case FLYBACKHIT_STOP:                 return "FLYBACKHIT_STOP";
  case FALLBACKHIT_STOP:                return "FALLBACKHIT_STOP";
  case FALLOFF_STOP:                    return "FALLOFF_STOP";
  case FALLOFF_FORWARD_STOP:            return "FALLOFF_FORWARD_STOP";
  case STAND_FALLFORWARD_STOP:          return "STAND_FALLFORWARD_STOP";
  case PRONE_LAYFROMHIT_STOP:           return "PRONE_LAYFROMHIT_STOP";
  case HOPFENCE:                        return "HOPFENCE";
  case ADULTMONSTER_HIT:                return "ADULTMONSTER_HIT";
  case ADULTMONSTER_DYING:              return "ADULTMONSTER_DYING";
  case ADULTMONSTER_DYING_STOP:         return "ADULTMONSTER_DYING_STOP";
  case PUNCH_BREATH:                    return "PUNCH_BREATH";
  case PUNCH:                           return "PUNCH";
  case NOTHING_STAND:                   return "NOTHING_STAND";
  case JFK_HITDEATH:                    return "JFK_HITDEATH";
  case JFK_HITDEATH_STOP:               return "JFK_HITDEATH_STOP";
  case JFK_HITDEATH_TWITCHB:            return "JFK_HITDEATH_TWITCHB";
  case FIRE_STAND_BURST_SPREAD:         return "FIRE_STAND_BURST_SPREAD";
  case FALLOFF_DEATH:                   return "FALLOFF_DEATH";
  case FALLOFF_DEATH_STOP:              return "FALLOFF_DEATH_STOP";
  case FALLOFF_TWITCHB:                 return "FALLOFF_TWITCHB";
  case FALLOFF_TWITCHNB:                return "FALLOFF_TWITCHNB";
  case FALLOFF_FORWARD_DEATH:           return "FALLOFF_FORWARD_DEATH";
  case FALLOFF_FORWARD_DEATH_STOP:      return "FALLOFF_FORWARD_DEATH_STOP";
  case FALLOFF_FORWARD_TWITCHB:         return "FALLOFF_FORWARD_TWITCHB";
  case FALLOFF_FORWARD_TWITCHNB:        return "FALLOFF_FORWARD_TWITCHNB";
  case OPEN_DOOR:                       return "OPEN_DOOR";
  case OPEN_STRUCT:                     return "OPEN_STRUCT";
  case PICKUP_ITEM:                     return "PICKUP_ITEM";
  case DROP_ITEM:                       return "DROP_ITEM";
  case SLICE:                           return "SLICE";
  case STAB:                            return "STAB";
  case CROUCH_STAB:                     return "CROUCH_STAB";
  case START_AID:                       return "START_AID";
  case GIVING_AID:                      return "GIVING_AID";
  case END_AID:                         return "END_AID";
  case DODGE_ONE:                       return "DODGE_ONE";
  case FATCIV_ASS_SCRATCH:              return "FATCIV_ASS_SCRATCH";
  case READY_DUAL_STAND:                return "READY_DUAL_STAND";
  case AIM_DUAL_STAND:                  return "AIM_DUAL_STAND";
  case SHOOT_DUAL_STAND:                return "SHOOT_DUAL_STAND";
  case END_DUAL_STAND:                  return "END_DUAL_STAND";
  case RAISE_RIFLE:                     return "RAISE_RIFLE";
  case LOWER_RIFLE:                     return "LOWER_RIFLE";
  case BODYEXPLODING:                   return "BODYEXPLODING";
  case THROW_ITEM:                      return "THROW_ITEM";
  case LOB_ITEM:                        return "LOB_ITEM";
  case QUEEN_MONSTER_BREATHING:         return "QUEEN_MONSTER_BREATHING";
  case CROUCHED_BURST:                  return "CROUCHED_BURST";
  case PRONE_BURST:                     return "PRONE_BURST";
  case NOTUSEDANIM1:                    return "NOTUSEDANIM1";
  case BIGBUY_FLEX:                     return "BIGBUY_FLEX";
  case BIGBUY_STRECH:                   return "BIGBUY_STRECH";
  case BIGBUY_SHOEDUST:                 return "BIGBUY_SHOEDUST";
  case BIGBUY_HEADTURN:                 return "BIGBUY_HEADTURN";
  case MINIGIRL_STOCKING:               return "MINIGIRL_STOCKING";
  case GIVE_ITEM:                       return "GIVE_ITEM";
  case CLIMB_CLIFF:                     return "CLIMB_CLIFF";
  case COW_EATING:                      return "COW_EATING";
  case COW_HIT:                         return "COW_HIT";
  case COW_DYING:                       return "COW_DYING";
  case COW_DYING_STOP:                  return "COW_DYING_STOP";
  case WATER_HIT:                       return "WATER_HIT";
  case WATER_DIE:                       return "WATER_DIE";
  case WATER_DIE_STOP:                  return "WATER_DIE_STOP";
  case CROW_WALK:                       return "CROW_WALK";
  case CROW_TAKEOFF:                    return "CROW_TAKEOFF";
  case CROW_LAND:                       return "CROW_LAND";
  case CROW_FLY:                        return "CROW_FLY";
  case CROW_EAT:                        return "CROW_EAT";
  case HELIDROP:                        return "HELIDROP";
  case FEM_CLEAN:                       return "FEM_CLEAN";
  case FEM_KICKSN:                      return "FEM_KICKSN";
  case FEM_LOOK:                        return "FEM_LOOK";
  case FEM_WIPE:                        return "FEM_WIPE";
  case REG_SQUISH:                      return "REG_SQUISH";
  case REG_PULL:                        return "REG_PULL";
  case REG_SPIT:                        return "REG_SPIT";
  case HATKID_YOYO:                     return "HATKID_YOYO";
  case KID_ARMPIT:                      return "KID_ARMPIT";
  case MONSTER_CLOSE_ATTACK:            return "MONSTER_CLOSE_ATTACK";
  case MONSTER_SPIT_ATTACK:             return "MONSTER_SPIT_ATTACK";
  case MONSTER_BEGIN_EATTING_FLESH:     return "MONSTER_BEGIN_EATTING_FLESH";
  case MONSTER_EATTING_FLESH:           return "MONSTER_EATTING_FLESH";
  case MONSTER_END_EATTING_FLESH:       return "MONSTER_END_EATTING_FLESH";
  case BLOODCAT_RUN:                    return "BLOODCAT_RUN";
  case BLOODCAT_STARTREADY:             return "BLOODCAT_STARTREADY";
  case BLOODCAT_READY:                  return "BLOODCAT_READY";
  case BLOODCAT_ENDREADY:               return "BLOODCAT_ENDREADY";
  case BLOODCAT_HIT:                    return "BLOODCAT_HIT";
  case BLOODCAT_DYING:                  return "BLOODCAT_DYING";
  case BLOODCAT_DYING_STOP:             return "BLOODCAT_DYING_STOP";
  case BLOODCAT_SWIPE:                  return "BLOODCAT_SWIPE";
  case NINJA_GOTOBREATH:                return "NINJA_GOTOBREATH";
  case NINJA_BREATH:                    return "NINJA_BREATH";
  case NINJA_LOWKICK:                   return "NINJA_LOWKICK";
  case NINJA_PUNCH:                     return "NINJA_PUNCH";
  case NINJA_SPINKICK:                  return "NINJA_SPINKICK";
  case END_OPEN_DOOR:                   return "END_OPEN_DOOR";
  case END_OPEN_LOCKED_DOOR:            return "END_OPEN_LOCKED_DOOR";
  case KICK_DOOR:                       return "KICK_DOOR";
  case CLOSE_DOOR:                      return "CLOSE_DOOR";
  case RIFLE_STAND_HIT:                 return "RIFLE_STAND_HIT";
  case DEEP_WATER_TRED:                 return "DEEP_WATER_TRED";
  case DEEP_WATER_SWIM:                 return "DEEP_WATER_SWIM";
  case DEEP_WATER_HIT:                  return "DEEP_WATER_HIT";
  case DEEP_WATER_DIE:                  return "DEEP_WATER_DIE";
  case DEEP_WATER_DIE_STOPPING:         return "DEEP_WATER_DIE_STOPPING";
  case DEEP_WATER_DIE_STOP:             return "DEEP_WATER_DIE_STOP";
  case LOW_TO_DEEP_WATER:               return "LOW_TO_DEEP_WATER";
  case DEEP_TO_LOW_WATER:               return "DEEP_TO_LOW_WATER";
  case GOTO_SLEEP:                      return "GOTO_SLEEP";
  case SLEEPING:                        return "SLEEPING";
  case WKAEUP_FROM_SLEEP:               return "WKAEUP_FROM_SLEEP";
  case FIRE_LOW_STAND:                  return "FIRE_LOW_STAND";
  case FIRE_BURST_LOW_STAND:            return "FIRE_BURST_LOW_STAND";
  case LARVAE_BREATH:                   return "LARVAE_BREATH";
  case LARVAE_HIT:                      return "LARVAE_HIT";
  case LARVAE_DIE:                      return "LARVAE_DIE";
  case LARVAE_DIE_STOP:                 return "LARVAE_DIE_STOP";
  case LARVAE_WALK:                     return "LARVAE_WALK";
  case INFANT_HIT:                      return "INFANT_HIT";
  case INFANT_DIE:                      return "INFANT_DIE";
  case INFANT_DIE_STOP:                 return "INFANT_DIE_STOP";
  case INFANT_ATTACK:                   return "INFANT_ATTACK";
  case INFANT_BEGIN_EATTING_FLESH:      return "INFANT_BEGIN_EATTING_FLESH";
  case INFANT_EATTING_FLESH:            return "INFANT_EATTING_FLESH";
  case INFANT_END_EATTING_FLESH:        return "INFANT_END_EATTING_FLESH";
  case MONSTER_UP:                      return "MONSTER_UP";
  case MONSTER_JUMP:                    return "MONSTER_JUMP";
  case STANDING_SHOOT_UNJAM:            return "STANDING_SHOOT_UNJAM";
  case CROUCH_SHOOT_UNJAM:              return "CROUCH_SHOOT_UNJAM";
  case PRONE_SHOOT_UNJAM:               return "PRONE_SHOOT_UNJAM";
  case STANDING_SHOOT_DWEL_UNJAM:       return "STANDING_SHOOT_DWEL_UNJAM";
  case STANDING_SHOOT_LOW_UNJAM:        return "STANDING_SHOOT_LOW_UNJAM";
  case READY_DUAL_CROUCH:               return "READY_DUAL_CROUCH";
  case AIM_DUAL_CROUCH:                 return "AIM_DUAL_CROUCH";
  case SHOOT_DUAL_CROUCH:               return "SHOOT_DUAL_CROUCH";
  case END_DUAL_CROUCH:                 return "END_DUAL_CROUCH";
  case CROUCH_SHOOT_DWEL_UNJAM:         return "CROUCH_SHOOT_DWEL_UNJAM";
  case ADJACENT_GET_ITEM:               return "ADJACENT_GET_ITEM";
  case CUTTING_FENCE:                   return "CUTTING_FENCE";
  case CRIPPLE_BEG:                     return "CRIPPLE_BEG";
  case CRIPPLE_HIT:                     return "CRIPPLE_HIT";
  case CRIPPLE_DIE:                     return "CRIPPLE_DIE";
  case CRIPPLE_DIE_STOP:                return "CRIPPLE_DIE_STOP";
  case CRIPPLE_DIE_FLYBACK:             return "CRIPPLE_DIE_FLYBACK";
  case CRIPPLE_DIE_FLYBACK_STOP:        return "CRIPPLE_DIE_FLYBACK_STOP";
  case CRIPPLE_KICKOUT:                 return "CRIPPLE_KICKOUT";
  case FROM_INJURED_TRANSITION:         return "FROM_INJURED_TRANSITION";
  case THROW_KNIFE:                     return "THROW_KNIFE";
  case KNIFE_BREATH:                    return "KNIFE_BREATH";
  case KNIFE_GOTOBREATH:                return "KNIFE_GOTOBREATH";
  case KNIFE_ENDBREATH:                 return "KNIFE_ENDBREATH";
  case ROBOTNW_HIT:                     return "ROBOTNW_HIT";
  case ROBOTNW_DIE:                     return "ROBOTNW_DIE";
  case ROBOTNW_DIE_STOP:                return "ROBOTNW_DIE_STOP";
  case CATCH_STANDING:                  return "CATCH_STANDING";
  case CATCH_CROUCHED:                  return "CATCH_CROUCHED";
  case PLANT_BOMB:                      return "PLANT_BOMB";
  case USE_REMOTE:                      return "USE_REMOTE";
  case START_COWER:                     return "START_COWER";
  case COWERING:                        return "COWERING";
  case END_COWER:                       return "END_COWER";
  case STEAL_ITEM:                      return "STEAL_ITEM";
  case SHOOT_ROCKET:                    return "SHOOT_ROCKET";
  case CIV_DIE2:                        return "CIV_DIE2";
  case SHOOT_MORTAR:                    return "SHOOT_MORTAR";
  case CROW_DIE:                        return "CROW_DIE";
  case SIDE_STEP:                       return "SIDE_STEP";
  case WALK_BACKWARDS:                  return "WALK_BACKWARDS";
  case BEGIN_OPENSTRUCT:                return "BEGIN_OPENSTRUCT";
  case END_OPENSTRUCT:                  return "END_OPENSTRUCT";
  case END_OPENSTRUCT_LOCKED:           return "END_OPENSTRUCT_LOCKED";
  case PUNCH_LOW:                       return "PUNCH_LOW";
  case PISTOL_SHOOT_LOW:                return "PISTOL_SHOOT_LOW";
  case DECAPITATE:                      return "DECAPITATE";
  case BLOODCAT_BITE_ANIM:              return "BLOODCAT_BITE_ANIM";
  case BIGMERC_IDLE_NECK:               return "BIGMERC_IDLE_NECK";
  case BIGMERC_CROUCH_TRANS_INTO:       return "BIGMERC_CROUCH_TRANS_INTO";
  case BIGMERC_CROUCH_TRANS_OUTOF:      return "BIGMERC_CROUCH_TRANS_OUTOF";
  case GOTO_PATIENT:                    return "GOTO_PATIENT";
  case BEING_PATIENT:                   return "BEING_PATIENT";
  case GOTO_DOCTOR:                     return "GOTO_DOCTOR";
  case BEING_DOCTOR:                    return "BEING_DOCTOR";
  case END_DOCTOR:                      return "END_DOCTOR";
  case GOTO_REPAIRMAN:                  return "GOTO_REPAIRMAN";
  case BEING_REPAIRMAN:                 return "BEING_REPAIRMAN";
  case END_REPAIRMAN:                   return "END_REPAIRMAN";
  case FALL_INTO_PIT:                   return "FALL_INTO_PIT";
  case ROBOT_WALK:                      return "ROBOT_WALK";
  case ROBOT_SHOOT:                     return "ROBOT_SHOOT";
  case QUEEN_HIT:                       return "QUEEN_HIT";
  case QUEEN_DIE:                       return "QUEEN_DIE";
  case QUEEN_DIE_STOP:                  return "QUEEN_DIE_STOP";
  case QUEEN_INTO_READY:                return "QUEEN_INTO_READY";
  case QUEEN_READY:                     return "QUEEN_READY";
  case QUEEN_END_READY:                 return "QUEEN_END_READY";
  case QUEEN_CALL:                      return "QUEEN_CALL";
  case QUEEN_SPIT:                      return "QUEEN_SPIT";
  case QUEEN_SWIPE:                     return "QUEEN_SWIPE";
  case RELOAD_ROBOT:                    return "RELOAD_ROBOT";
  case END_CATCH:                       return "END_CATCH";
  case END_CROUCH_CATCH:                return "END_CROUCH_CATCH";
  case AI_RADIO:                        return "AI_RADIO";
  case AI_CR_RADIO:                     return "AI_CR_RADIO";
  case TANK_SHOOT:                      return "TANK_SHOOT";
  case TANK_BURST:                      return "TANK_BURST";
  case QUEEN_SLAP:                      return "QUEEN_SLAP";
  case SLAP_HIT:                        return "SLAP_HIT";
  case TAKE_BLOOD_FROM_CORPSE:          return "TAKE_BLOOD_FROM_CORPSE";
  case VEHICLE_DIE:                     return "VEHICLE_DIE";
  case QUEEN_FRUSTRATED_SLAP:           return "QUEEN_FRUSTRATED_SLAP";
  case CHARIOTS_OF_FIRE:                return "CHARIOTS_OF_FIRE";
  case AI_PULL_SWITCH:                  return "AI_PULL_SWITCH";
  case MONSTER_MELT:                    return "MONSTER_MELT";
  case MERC_HURT_IDLE_ANIM:             return "MERC_HURT_IDLE_ANIM";
  case END_HURT_WALKING:                return "END_HURT_WALKING";
  case PASS_OBJECT:                     return "PASS_OBJECT";
  case DROP_ADJACENT_OBJECT:            return "DROP_ADJACENT_OBJECT";
  case READY_DUAL_PRONE:                return "READY_DUAL_PRONE";
  case AIM_DUAL_PRONE:                  return "AIM_DUAL_PRONE";
  case SHOOT_DUAL_PRONE:                return "SHOOT_DUAL_PRONE";
  case END_DUAL_PRONE:                  return "END_DUAL_PRONE";
  case PRONE_SHOOT_DWEL_UNJAM:          return "PRONE_SHOOT_DWEL_UNJAM";
  case PICK_LOCK:                       return "PICK_LOCK";
  case OPEN_DOOR_CROUCHED:              return "OPEN_DOOR_CROUCHED";
  case BEGIN_OPENSTRUCT_CROUCHED:       return "BEGIN_OPENSTRUCT_CROUCHED";
  case CLOSE_DOOR_CROUCHED:             return "CLOSE_DOOR_CROUCHED";
  case OPEN_STRUCT_CROUCHED:            return "OPEN_STRUCT_CROUCHED";
  case END_OPEN_DOOR_CROUCHED:          return "END_OPEN_DOOR_CROUCHED";
  case END_OPENSTRUCT_CROUCHED:         return "END_OPENSTRUCT_CROUCHED";
  case END_OPEN_LOCKED_DOOR_CROUCHED:   return "END_OPEN_LOCKED_DOOR_CROUCHED";
  case END_OPENSTRUCT_LOCKED_CROUCHED:  return "END_OPENSTRUCT_LOCKED_CROUCHED";
  case DRUNK_IDLE:                      return "DRUNK_IDLE";
  case CROWBAR_ATTACK:                  return "CROWBAR_ATTACK";
  case CIV_COWER_HIT:                   return "CIV_COWER_HIT";
  case BLOODCAT_WALK_BACKWARDS:         return "BLOODCAT_WALK_BACKWARDS";
  case MONSTER_WALK_BACKWARDS:          return "MONSTER_WALK_BACKWARDS";
  case KID_SKIPPING:                    return "KID_SKIPPING";
  case ROBOT_BURST_SHOOT:               return "ROBOT_BURST_SHOOT";
  case ATTACH_CAN_TO_STRING:            return "ATTACH_CAN_TO_STRING";
  case SWAT_BACKWARDS:                  return "SWAT_BACKWARDS";
  case JUMP_OVER_BLOCKING_PERSON:       return "JUMP_OVER_BLOCKING_PERSON";
  case REFUEL_VEHICLE:                  return "REFUEL_VEHICLE";
  case ROBOT_CAMERA_NOT_MOVING:         return "ROBOT_CAMERA_NOT_MOVING";
  case CRIPPLE_OPEN_DOOR:               return "CRIPPLE_OPEN_DOOR";
  case CRIPPLE_CLOSE_DOOR:              return "CRIPPLE_CLOSE_DOOR";
  case CRIPPLE_END_OPEN_DOOR:           return "CRIPPLE_END_OPEN_DOOR";
  case CRIPPLE_END_OPEN_LOCKED_DOOR:    return "CRIPPLE_END_OPEN_LOCKED_DOOR";
  case LOCKPICK_CROUCHED:               return "LOCKPICK_CROUCHED";
  default:                              return "???";
  }
}
