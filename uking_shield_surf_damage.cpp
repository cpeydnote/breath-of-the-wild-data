__int64 __fastcall DamageMgrShield::shieldSurfDamageLogic(DamageMgrShield *a1, signed int *dmg, _DWORD *a3, _DWORD *a4, int *a5, int *a6, int *a7)
{
  // [COLLAPSED LOCAL DECLARATIONS. PRESS KEYPAD CTRL-"+" TO EXPAND]

  v9 = (Weapon *)a1->_._.actor;
  v10 = __ldar((unsigned __int8 *)&unk_71025AE5D8);
  if ( !((unsigned __int64)&unk_71025AE5D8 & 1) && (unsigned int)_cxa_guard_acquire_0(&unk_71025AE5D8) )
  {
    Weapon::rttiInfo = (__int64)&off_7102355938;
    _cxa_guard_release_0(&unk_71025AE5D8);
  }
  if ( !v9
    || !v9->vptr->w.a.b.checkDerivedRuntimeTypeInfo((Actor *)v9, &Weapon::rttiInfo)
    || !(((__int64 (__fastcall *)(Weapon *))v9->vptr->w.isParentPlayer)(v9) & 1) )
  {
    return 0;
  }
  acc.fromOtherThread = 0;
  acc.actor = 0LL;
  v31 = 0;
  BaseProcLink::getActor(&v9->_._.parentActorProcLink, &acc);
  if ( act::acc::PlayerBase::isShieldRideOnGround(&acc) & 1 )
  {
    v16 = v9->_._._.actorParam->_.gParamList;
    v17 = v16->res.numObjects;
    v18 = (BgparamlistObjectShield **)v16->res.objects;
    if ( v17 > GParamObj_Shield )
      v18 += 0x10;
    rideBreakRatio = (*v18)->rideBreakRatio.value;
    v20 = a1->surfTimer;
    if ( v20 <= (float)(signed int)get10() )
    {
      v22 = 0;
    }
    else
    {
      v21 = a1->damage;
      a1->surfTimer = 0.0;
      v22 = (signed int)(float)(rideBreakRatio
                              * (float)(signed int)((unsigned __int64)getShieldRideHitBaseDamage() * v21));
    }
    if ( act::acc::PlayerBase::isNoShieldDamageFloor(&acc) )
      goto LABEL_25;
    v25 = act::acc::getVelocity(&acc);
    if ( sqrtf((float)((float)(v25->x * v25->x) + (float)(v25->y * v25->y)) + (float)(v25->z * v25->z)) > 0.03 )
    {
      v26 = getShieldRideBaseFrame();
      if ( !v26 )
        goto LABEL_25;
      updateFrameCount(&a1->field_68, rideBreakRatio);
      v27 = (float)v26;
      v28 = a1->field_68;
      if ( v28 > (float)v26 )
      {
        a1->field_68 = v28 - v27;
        v29 = (signed int)(float)(v28 / v27);
        if ( v29 >= 1 )
        {
          *dmg = v22 + a1->damage * v29;
          *a3 = 0;
          *a4 = 0;
          *a5 = 5;
          *a6 = 0xF;
LABEL_24:
          v23 = 1;
          *a7 = 1;
LABEL_26:
          ActorAccessor::dtor(&acc);
          return v23;
        }
      }
    }
    if ( v22 >= 1 )
    {
      *dmg = v22;
      *a3 = 0;
      *a4 = 0;
      *a5 = 5;
      *a6 = 0xF;
      goto LABEL_24;
    }
  }
  else
  {
    updateFrameCount(&a1->surfTimer, 1.0);
  }
LABEL_25:
  v23 = 0;
  goto LABEL_26;
}