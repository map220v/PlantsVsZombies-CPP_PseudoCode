// Class: EA::Text::Bezier


/* EA::Text::Bezier::GetDistance(EA::Text::Point const&, EA::Text::Point const&) */

float EA::Text::Bezier::GetDistance(Point *param_1,Point *param_2)

{
  return SQRT((*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) *
              (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) +
              (*(float *)param_2 - *(float *)param_1) * (*(float *)param_2 - *(float *)param_1));
}


/* EA::Text::Bezier::GetAngle(EA::Text::Point const&, EA::Text::Point const&) */

void EA::Text::Bezier::GetAngle(Point *param_1,Point *param_2)

{
  atan2f(*(float *)(param_2 + 4) - *(float *)(param_1 + 4),*(float *)param_2 - *(float *)param_1);
  return;
}

