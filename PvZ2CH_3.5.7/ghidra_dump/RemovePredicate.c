// Class: RemovePredicate


/* RemovePredicate::TEMPNAMEPLACEHOLDERVALUE(AnimationController*) */

char __thiscall RemovePredicate::operator()(RemovePredicate *this,AnimationController *param_1)

{
  char cVar1;
  char cVar2;
  
  if (*(code **)(*(long *)param_1 + 0x78) == AnimationController::IsAnimDone) {
    cVar1 = AnimationController::IsAnimDone(param_1,*(float *)this);
  }
  else {
    cVar1 = (**(code **)(*(long *)param_1 + 0x78))();
  }
  if ((cVar1 != '\0') && (cVar2 = FUN_03b5b7bc(param_1[0x1c]), cVar2 != '\0')) {
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
  }
  return cVar1;
}

