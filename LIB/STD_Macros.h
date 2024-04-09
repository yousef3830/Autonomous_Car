//
// Created by youse on 8/18/2023.
//

#ifndef BITCONTROL_STD_MACROS_H
#define BITCONTROL_STD_MACROS_H

#define SET_BIT(Reg,Bit) Reg = Reg | (1<<Bit)
#define CLR_BIT(Reg,Bit) Reg = Reg & ~(1<<Bit)
#define TOG_BIT(Reg,Bit) Reg = Reg ^ (1<<Bit)
#define READ_BIT(Reg,Bit) ((Reg & (1<<Bit)) != 0)

#endif //BITCONTROL_STD_MACROS_H
