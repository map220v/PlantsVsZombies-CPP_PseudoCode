// Class: DTween


/* DTween::tweenTo(float, DTween::TweenType, std::vector<float, std::allocator<float> > const&) */

void DTween::tweenTo(float param_1,undefined4 param_2,vector<float,std::allocator<float>> *param_3)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  
  switch(param_2) {
  case 0:
    nop();
    return;
  case 1:
    sineEaseIn(param_1);
    return;
  case 2:
    sineEaseOut(param_1);
    return;
  default:
    sineEaseInOut(param_1);
    return;
  case 4:
    quadraticIn(param_1);
    return;
  case 5:
    quadraticOut(param_1);
    return;
  case 6:
    quadraticInOut(param_1);
    return;
  case 7:
    cubicEaseIn(param_1);
    return;
  case 8:
    cubicEaseOut(param_1);
    return;
  case 9:
    cubicEaseInOut(param_1);
    return;
  case 10:
    quartEaseIn(param_1);
    return;
  case 0xb:
    quartEaseOut(param_1);
    return;
  case 0xc:
    quartEaseInOut(param_1);
    return;
  case 0xd:
    quintEaseIn(param_1);
    return;
  case 0xe:
    quintEaseOut(param_1);
    return;
  case 0xf:
    quintEaseInOut(param_1);
    return;
  case 0x10:
    expoEaseIn(param_1);
    return;
  case 0x11:
    expoEaseOut(param_1);
    return;
  case 0x12:
    expoEaseInOut(param_1);
    return;
  case 0x13:
    circEaseIn(param_1);
    return;
  case 0x14:
    circEaseOut(param_1);
    return;
  case 0x15:
    circEaseInOut(param_1);
    return;
  case 0x16:
    cVar1 = std::vector<float,std::allocator<float>>::empty(param_3);
    if (cVar1 == '\0') {
      pfVar2 = (float *)FUN_04f68568(*(undefined8 *)param_3,0);
      fVar3 = *pfVar2;
    }
    else {
      fVar3 = 0.3;
    }
    break;
  case 0x17:
    cVar1 = std::vector<float,std::allocator<float>>::empty(param_3);
    if (cVar1 == '\0') {
      pfVar2 = (float *)FUN_04f68568(*(undefined8 *)param_3,0);
      fVar3 = *pfVar2;
    }
    else {
      fVar3 = 0.3;
    }
    elasticEaseOut(param_1,fVar3);
    return;
  case 0x18:
    cVar1 = std::vector<float,std::allocator<float>>::empty(param_3);
    if (cVar1 == '\0') {
      pfVar2 = (float *)FUN_04f68568(*(undefined8 *)param_3,0);
      fVar3 = *pfVar2;
    }
    else {
      fVar3 = 0.3;
    }
    elasticEaseInOut(param_1,fVar3);
    return;
  case 0x19:
    backEaseIn(param_1);
    return;
  case 0x1a:
    backEaseOut(param_1);
    return;
  case 0x1b:
    backEaseInOut(param_1);
    return;
  case 0x1c:
    bounceEaseIn(param_1);
    return;
  case 0x1d:
    bounceEaseOut(param_1);
    return;
  case 0x1e:
    bounceEaseInOut(param_1);
    return;
  case 0xffffffff:
    customEase(param_1,(vector *)param_3);
    return;
  }
  elasticEaseIn(param_1,fVar3);
  return;
}

