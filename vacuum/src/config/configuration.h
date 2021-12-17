/*
 * AgentSpeak code:
 *
 * +pos1 <- say_position; move.
 * 
 * +pos2 <- say_position; move.
 * 
 * +pos3 <- say_position; move.
 *  
 * +pos4 <- say_position.
 */ 

#ifndef CONFIGURATION_H_
#define CONFIGURATION_H_

#include "bdi/belief_base.h"
#include "bdi/event_base.h"
#include "bdi/plan_base.h"
#include "bdi/intention_base.h"
#include "../../data/functions.h"

class AgentSettings
{
private:
  Body body_0;
  Context context_0;
  Body body_1;
  Context context_1;
  Body body_2;
  Context context_2;
  Body body_3;
  Context context_3;
  BeliefBase belief_base;
  EventBase event_base;
  PlanBase plan_base;
  IntentionBase intention_base;

public:
  AgentSettings()
  {
    belief_base = BeliefBase(4);
    event_base = EventBase(6);
    plan_base = PlanBase(4);
    intention_base = IntentionBase(10, 4);

    //--------------------------------------------------------------------------

    Belief belief_pos1(0, update_pos1, false);
    belief_base.add_belief(belief_pos1);

    //--------------------------------------------------------------------------

    Belief belief_pos2(1, update_pos2, false);
    belief_base.add_belief(belief_pos2);

    //--------------------------------------------------------------------------

    Belief belief_pos3(2, update_pos3, false);
    belief_base.add_belief(belief_pos3);

    //--------------------------------------------------------------------------

    Belief belief_pos4(3, update_pos4, false);
    belief_base.add_belief(belief_pos4);

    //--------------------------------------------------------------------------

    Proposition prop_0(0);
    context_0 = Context(0);
    body_0 = Body(2);

    Proposition prop_0_body_0(4);
    BodyInstruction inst_0_0(BodyType::ACTION, prop_0_body_0, action_say_position);
    body_0.add_instruction(inst_0_0);

    Proposition prop_0_body_1(5);
    BodyInstruction inst_1_0(BodyType::ACTION, prop_0_body_1, action_move);
    body_0.add_instruction(inst_1_0);

    Plan plan_0(EventOperator::BELIEF_ADDITION, prop_0, &context_0, &body_0);
    plan_base.add_plan(plan_0);

    //--------------------------------------------------------------------------

    Proposition prop_1(1);
    context_1 = Context(0);
    body_1 = Body(2);

    Proposition prop_1_body_0(4);
    BodyInstruction inst_0_1(BodyType::ACTION, prop_1_body_0, action_say_position);
    body_1.add_instruction(inst_0_1);

    Proposition prop_1_body_1(5);
    BodyInstruction inst_1_1(BodyType::ACTION, prop_1_body_1, action_move);
    body_1.add_instruction(inst_1_1);

    Plan plan_1(EventOperator::BELIEF_ADDITION, prop_1, &context_1, &body_1);
    plan_base.add_plan(plan_1);

    //--------------------------------------------------------------------------

    Proposition prop_2(2);
    context_2 = Context(0);
    body_2 = Body(2);

    Proposition prop_2_body_0(4);
    BodyInstruction inst_0_2(BodyType::ACTION, prop_2_body_0, action_say_position);
    body_2.add_instruction(inst_0_2);

    Proposition prop_2_body_1(5);
    BodyInstruction inst_1_2(BodyType::ACTION, prop_2_body_1, action_move);
    body_2.add_instruction(inst_1_2);

    Plan plan_2(EventOperator::BELIEF_ADDITION, prop_2, &context_2, &body_2);
    plan_base.add_plan(plan_2);

    //--------------------------------------------------------------------------

    Proposition prop_3(3);
    context_3 = Context(0);
    body_3 = Body(1);

    Proposition prop_3_body_0(4);
    BodyInstruction inst_0_3(BodyType::ACTION, prop_3_body_0, action_say_position);
    body_3.add_instruction(inst_0_3);

    Plan plan_3(EventOperator::BELIEF_ADDITION, prop_3, &context_3, &body_3);
    plan_base.add_plan(plan_3);
  }

  BeliefBase * get_belief_base()
  {
    return &belief_base;
  }

  EventBase * get_event_base()
  {
    return &event_base;
  }

  PlanBase * get_plan_base()
  {
    return &plan_base;
  }

  IntentionBase * get_intention_base()
  {
    return &intention_base;
  }
};

#endif /*CONFIGURATION_H_ */