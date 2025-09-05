-------- EventFlow: Demo642_1 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagOFF', 'Demo_EventCancelStart', 'Demo_EventCancelEnd']
queries: ['CheckEventCancel']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_GameCamera', 'Demo_CameraAnimFlowAbs', 'Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_StartPointShutter
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_02[FinalTrial_Entrance]
entrypoint: None()
actions: ['Demo_TrigNullASPlay', 'Demo_PlayASForDemo']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_RumbleLoop', 'Demo_DemoLoopStopWithDamping']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Item_Conductor
entrypoint: None()
actions: ['Demo_TrigNullASPlay', 'Demo_Bind']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetPaletteType']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetNoConnect']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_StopAllDemoSound']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_DLC_Weapon_Sword_502
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo642_1() {

    fork {

        call Demo641_1.BindShiekerStone({'ShiekerStoneBindTargetUniqueName': 'FinalTrial_Entrance', 'ShiekerStoneBindTargetActorName': 'FldObj_DownloadTerminal_A_02', 'FldObj_DownloadTerminal_A_02': ActorIdentifier(name="FldObj_DownloadTerminal_A_02", sub_name="FinalTrial_Entrance")})

    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo642_1-C01-Link-A-0', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        DgnObj_StartPointShutter.Demo_Join({'IsWaitFinish': True})
        DgnObj_DLC_Weapon_Sword_502.Demo_Join({'IsWaitFinish': True})
    } {
        WorldManagerControl.Demo_SetPaletteType({'Speed': 1.0, 'IsWaitFinish': False, 'EndFrame': 0, 'ChangeFrame': 0, 'PaletteType': 2})
    }

    EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})

    call Demo642_1_C01()


    call Demo642_1_C02()


    call Demo642_1_C03()

}

void Demo642_1_C02() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActor': 3, 'UniqueName': 'FinalTrial_Entrance', 'TargetActorDirReferenceMode': 1, 'ActorName': 'FldObj_DownloadTerminal_A_02', 'Accept1FrameDelay': False, 'SceneName': 'C02-0'})
    } {

        call SheikPadSetOff({'ShiekerStoneBindTargetActorName': 'FldObj_DownloadTerminal_A_02', 'ShiekerStoneBindTargetUniqueName': 'FinalTrial_Entrance'})

    }

}

void Demo642_1_C03() {

    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-0'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_FinalShutter_Close'})
        EventCameraRumble.Demo_RumbleLoop({'Pattern': 4, 'Power': 0.10000000149011612, 'Sideways': False, 'IsWaitFinish': True})
        EventCameraRumble.Demo_DemoLoopStopWithDamping({'DampingTime': 45.0, 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        WorldManagerControl.Demo_SetPaletteType({'ChangeFrame': 1, 'IsWaitFinish': False, 'EndFrame': 0, 'PaletteType': 0, 'Speed': 0.800000011920929})
    }

    EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': True})
    if !EventSystemActor.CheckEventCancel() {
        Event94:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    } else {
        EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_FinalShutter_Close'})

        fork {
            GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'NoErrorCheck': True, 'IsOneTimeEndKeep': True, 'ClothWarpMode': 0, 'MorphingFrame': 10.0, 'ASName': 'Demo642_1-C00-Link-SheikPadSetOff', 'IsWaitFinish': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        } {
            Item_Conductor.Demo_Bind({'NodeName': 'Loc_Stone', 'IsWaitFinish': False, 'RotOffsetX': 0.0, 'RotOffsetY': 0.0, 'RotOffsetZ': 0.0, 'TransOffsetX': 0.0, 'TransOffsetY': 0.0, 'TransOffsetZ': 0.0, 'ActorName': 'FldObj_DownloadTerminal_A_02', 'UniqueName': 'FinalTrial_Entrance'})
        } {
            Item_Conductor.Demo_TrigNullASPlay({'IsWaitFinish': False, 'ASName': 'Off', 'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': True})
        }

        FldObj_DownloadTerminal_A_02[FinalTrial_Entrance].Demo_TrigNullASPlay({'ASName': 'PlayerCloseInWait', 'IsWaitFinish': False, 'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False})
        FldObj_DownloadTerminal_A_02[FinalTrial_Entrance].Demo_PlayASForDemo({'ASName': 'OffWait_Skl', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'DemoWait'})
        SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        goto Event94
    }
}

void Demo642_1_C01() {
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'Demo642_1_ElevatorArrival'})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C01-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})

    fork {
        EventCameraRumble.Demo_RumbleLoop({'Pattern': 4, 'Sideways': False, 'IsWaitFinish': True, 'Power': 1.0})
        EventCameraRumble.Demo_DemoLoopStopWithDamping({'DampingTime': 45.0, 'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 4})
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo642_1-C01-Link-A-1', 'NoErrorCheck': True, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    }

}

void SheikPadSetOff() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'SheikPadSetOff', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ASName': 'DemoWait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    } {
        FldObj_DownloadTerminal_A_02[FinalTrial_Entrance].Demo_PlayASForDemo({'ASName': 'GetOffStone_Skl', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        FldObj_DownloadTerminal_A_02[FinalTrial_Entrance].Demo_TrigNullASPlay({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASSlot': 0, 'SequenceBank': 0, 'ASName': 'Demo642_1-C02-Obj_DRCStoneStand_A_01-A-0'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
        FldObj_DownloadTerminal_A_02[FinalTrial_Entrance].Demo_TrigNullASPlay({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASSlot': 0, 'SequenceBank': 0, 'ASName': 'Demo642_1-C02-Obj_DRCStoneStand_A_01-A-1'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
    } {

        fork {
            Item_Conductor.Demo_Bind({'NodeName': 'Loc_Stone', 'IsWaitFinish': False, 'RotOffsetX': 0.0, 'RotOffsetY': 0.0, 'RotOffsetZ': 0.0, 'TransOffsetX': 0.0, 'TransOffsetY': 0.0, 'TransOffsetZ': 0.0, 'ActorName': 'ShiekerStoneBindTargetActorName', 'UniqueName': 'ShiekerStoneBindTargetUniqueName'})
        } {
            Item_Conductor.Demo_TrigNullASPlay({'IsWaitFinish': False, 'ASName': 'Off', 'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': True})
        }

    }

}
