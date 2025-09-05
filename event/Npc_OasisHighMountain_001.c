-------- EventFlow: Npc_OasisHighMountain_001 --------

Actor: Npc_OasisHighMountain_001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckTimeType', 'CheckFlag', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OasisHighMountain_001_first'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Gerud_Meat_SoldOut'}) {
            switch EventSystemActor.CheckTimeType() {
              case 0:
                Npc_OasisHighMountain_001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                if Npc_OasisHighMountain_001.IsOnInstEventFlag() {
                    Npc_OasisHighMountain_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHighMountain_001:talk14'})
                } else {

                    call sayhello()

                }
              case 1:
                Npc_OasisHighMountain_001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                if Npc_OasisHighMountain_001.IsOnInstEventFlag() {
                    Npc_OasisHighMountain_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHighMountain_001:talk13'})
                } else {

                    call sayhello()

                }
              case [2, 4, 5]:
                Npc_OasisHighMountain_001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                if Npc_OasisHighMountain_001.IsOnInstEventFlag() {
                    Npc_OasisHighMountain_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHighMountain_001:talk06'})
                } else {

                    call sayhello()

                }
              case 3:
                Event63:
                Npc_OasisHighMountain_001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_OasisHighMountain_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHighMountain_001:talk05'})
              case [6, 7]:
                Npc_OasisHighMountain_001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                if Npc_OasisHighMountain_001.IsOnInstEventFlag() {
                    Npc_OasisHighMountain_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHighMountain_001:talk07'})
                } else {

                    call sayhello()

                }
            }
        } else
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Npc_OasisHighMountain_001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            if Npc_OasisHighMountain_001.IsOnInstEventFlag() {
                Npc_OasisHighMountain_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHighMountain_001:talk12'})
            } else {

                call sayhello()

            }
          case 1:
            Npc_OasisHighMountain_001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            if Npc_OasisHighMountain_001.IsOnInstEventFlag() {
                Npc_OasisHighMountain_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHighMountain_001:talk11'})
            } else {

                call sayhello()

            }
          case [2, 4, 5]:
            Npc_OasisHighMountain_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHighMountain_001:talk00'})
          case 3:
            goto Event63
          case [6, 7]:
            Npc_OasisHighMountain_001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            if Npc_OasisHighMountain_001.IsOnInstEventFlag() {
                Npc_OasisHighMountain_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHighMountain_001:talk04'})
            } else {

                call sayhello()

            }
        }
    } else {
        Event32:
        Npc_OasisHighMountain_001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})

        call hello()

        Npc_OasisHighMountain_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHighMountain_001:talk15'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_OasisHighMountain_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHighMountain_001:talk16'})
        } else {
            Npc_OasisHighMountain_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHighMountain_001:talk17'})
        }
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_OasisHighMountain_001_first', 'IsWaitFinish': True})
    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_OasisHighMountain_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHighMountain_001:talk08'})
      case [2, 3, 4]:
        Npc_OasisHighMountain_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHighMountain_001:talk09'})
      case [5, 6, 7]:
        Npc_OasisHighMountain_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHighMountain_001:talk10'})
    }
}

void sayhello() {
    goto Event32
}
