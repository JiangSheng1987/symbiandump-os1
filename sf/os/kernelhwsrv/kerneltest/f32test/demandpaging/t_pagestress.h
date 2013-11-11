// Copyright (c) 2006-2009 Nokia Corporation and/or its subsidiary(-ies).
// All rights reserved.
// This component and the accompanying materials are made available
// under the terms of the License "Eclipse Public License v1.0"
// which accompanies this distribution, and is available
// at the URL "http://www.eclipse.org/legal/epl-v10.html".
//
// Initial Contributors:
// Nokia Corporation - initial contribution.
//
// Contributors:
//
// Description:
// f32test\demandpaging\t_pagestress.h
// 
//

#ifndef _T_PAGESTRESS_H_
#define _T_PAGESTRESS_H_

#ifndef T_PAGESTRESS_SMALL_ARRAY
#define T_PAGESTRESS_LARGE_ARRAY
#endif

TInt TestAlignment(TInt aParam1, TInt aParam2);
TInt CallTestFunc(TInt aParam1, TInt aParam2, TInt aIndex);

#define TPS_DECLARE_PROTO(_num) TInt TestAlignment##_num(TInt aParam1, TInt aParam2);

TPS_DECLARE_PROTO(0)
TPS_DECLARE_PROTO(1)
TPS_DECLARE_PROTO(2)
TPS_DECLARE_PROTO(3)
TPS_DECLARE_PROTO(4)
TPS_DECLARE_PROTO(5)
TPS_DECLARE_PROTO(6)
TPS_DECLARE_PROTO(7)
TPS_DECLARE_PROTO(8)
TPS_DECLARE_PROTO(9)
TPS_DECLARE_PROTO(10)
TPS_DECLARE_PROTO(11)
TPS_DECLARE_PROTO(12)
TPS_DECLARE_PROTO(13)
TPS_DECLARE_PROTO(14)
TPS_DECLARE_PROTO(15)
TPS_DECLARE_PROTO(16)
TPS_DECLARE_PROTO(17)
TPS_DECLARE_PROTO(18)
TPS_DECLARE_PROTO(19)
TPS_DECLARE_PROTO(20)
TPS_DECLARE_PROTO(21)
TPS_DECLARE_PROTO(22)
TPS_DECLARE_PROTO(23)
TPS_DECLARE_PROTO(24)
TPS_DECLARE_PROTO(25)
TPS_DECLARE_PROTO(26)
TPS_DECLARE_PROTO(27)
TPS_DECLARE_PROTO(28)
TPS_DECLARE_PROTO(29)
TPS_DECLARE_PROTO(30)
TPS_DECLARE_PROTO(31)
TPS_DECLARE_PROTO(32)
TPS_DECLARE_PROTO(33)
TPS_DECLARE_PROTO(34)
TPS_DECLARE_PROTO(35)
TPS_DECLARE_PROTO(36)
TPS_DECLARE_PROTO(37)
TPS_DECLARE_PROTO(38)
TPS_DECLARE_PROTO(39)
TPS_DECLARE_PROTO(40)
TPS_DECLARE_PROTO(41)
TPS_DECLARE_PROTO(42)
TPS_DECLARE_PROTO(43)
TPS_DECLARE_PROTO(44)
TPS_DECLARE_PROTO(45)
TPS_DECLARE_PROTO(46)
TPS_DECLARE_PROTO(47)
TPS_DECLARE_PROTO(48)
TPS_DECLARE_PROTO(49)
TPS_DECLARE_PROTO(50)
TPS_DECLARE_PROTO(51)
TPS_DECLARE_PROTO(52)
TPS_DECLARE_PROTO(53)
TPS_DECLARE_PROTO(54)
TPS_DECLARE_PROTO(55)
TPS_DECLARE_PROTO(56)
TPS_DECLARE_PROTO(57)
TPS_DECLARE_PROTO(58)
TPS_DECLARE_PROTO(59)
TPS_DECLARE_PROTO(60)
TPS_DECLARE_PROTO(61)
TPS_DECLARE_PROTO(62)
TPS_DECLARE_PROTO(63)
#ifdef T_PAGESTRESS_LARGE_ARRAY
TPS_DECLARE_PROTO(64)
TPS_DECLARE_PROTO(65)
TPS_DECLARE_PROTO(66)
TPS_DECLARE_PROTO(67)
TPS_DECLARE_PROTO(68)
TPS_DECLARE_PROTO(69)
TPS_DECLARE_PROTO(70)
TPS_DECLARE_PROTO(71)
TPS_DECLARE_PROTO(72)
TPS_DECLARE_PROTO(73)
TPS_DECLARE_PROTO(74)
TPS_DECLARE_PROTO(75)
TPS_DECLARE_PROTO(76)
TPS_DECLARE_PROTO(77)
TPS_DECLARE_PROTO(78)
TPS_DECLARE_PROTO(79)
TPS_DECLARE_PROTO(80)
TPS_DECLARE_PROTO(81)
TPS_DECLARE_PROTO(82)
TPS_DECLARE_PROTO(83)
TPS_DECLARE_PROTO(84)
TPS_DECLARE_PROTO(85)
TPS_DECLARE_PROTO(86)
TPS_DECLARE_PROTO(87)
TPS_DECLARE_PROTO(88)
TPS_DECLARE_PROTO(89)
TPS_DECLARE_PROTO(90)
TPS_DECLARE_PROTO(91)
TPS_DECLARE_PROTO(92)
TPS_DECLARE_PROTO(93)
TPS_DECLARE_PROTO(94)
TPS_DECLARE_PROTO(95)
TPS_DECLARE_PROTO(96)
TPS_DECLARE_PROTO(97)
TPS_DECLARE_PROTO(98)
TPS_DECLARE_PROTO(99)
TPS_DECLARE_PROTO(100)
TPS_DECLARE_PROTO(101)
TPS_DECLARE_PROTO(102)
TPS_DECLARE_PROTO(103)
TPS_DECLARE_PROTO(104)
TPS_DECLARE_PROTO(105)
TPS_DECLARE_PROTO(106)
TPS_DECLARE_PROTO(107)
TPS_DECLARE_PROTO(108)
TPS_DECLARE_PROTO(109)
TPS_DECLARE_PROTO(110)
TPS_DECLARE_PROTO(111)
TPS_DECLARE_PROTO(112)
TPS_DECLARE_PROTO(113)
TPS_DECLARE_PROTO(114)
TPS_DECLARE_PROTO(115)
TPS_DECLARE_PROTO(116)
TPS_DECLARE_PROTO(117)
TPS_DECLARE_PROTO(118)
TPS_DECLARE_PROTO(119)
TPS_DECLARE_PROTO(120)
TPS_DECLARE_PROTO(121)
TPS_DECLARE_PROTO(122)
TPS_DECLARE_PROTO(123)
TPS_DECLARE_PROTO(124)
TPS_DECLARE_PROTO(125)
TPS_DECLARE_PROTO(126)
TPS_DECLARE_PROTO(127)
TPS_DECLARE_PROTO(128)
TPS_DECLARE_PROTO(129)
TPS_DECLARE_PROTO(130)
TPS_DECLARE_PROTO(131)
TPS_DECLARE_PROTO(132)
TPS_DECLARE_PROTO(133)
TPS_DECLARE_PROTO(134)
TPS_DECLARE_PROTO(135)
TPS_DECLARE_PROTO(136)
TPS_DECLARE_PROTO(137)
TPS_DECLARE_PROTO(138)
TPS_DECLARE_PROTO(139)
TPS_DECLARE_PROTO(140)
TPS_DECLARE_PROTO(141)
TPS_DECLARE_PROTO(142)
TPS_DECLARE_PROTO(143)
TPS_DECLARE_PROTO(144)
TPS_DECLARE_PROTO(145)
TPS_DECLARE_PROTO(146)
TPS_DECLARE_PROTO(147)
TPS_DECLARE_PROTO(148)
TPS_DECLARE_PROTO(149)
TPS_DECLARE_PROTO(150)
TPS_DECLARE_PROTO(151)
TPS_DECLARE_PROTO(152)
TPS_DECLARE_PROTO(153)
TPS_DECLARE_PROTO(154)
TPS_DECLARE_PROTO(155)
TPS_DECLARE_PROTO(156)
TPS_DECLARE_PROTO(157)
TPS_DECLARE_PROTO(158)
TPS_DECLARE_PROTO(159)
TPS_DECLARE_PROTO(160)
TPS_DECLARE_PROTO(161)
TPS_DECLARE_PROTO(162)
TPS_DECLARE_PROTO(163)
TPS_DECLARE_PROTO(164)
TPS_DECLARE_PROTO(165)
TPS_DECLARE_PROTO(166)
TPS_DECLARE_PROTO(167)
TPS_DECLARE_PROTO(168)
TPS_DECLARE_PROTO(169)
TPS_DECLARE_PROTO(170)
TPS_DECLARE_PROTO(171)
TPS_DECLARE_PROTO(172)
TPS_DECLARE_PROTO(173)
TPS_DECLARE_PROTO(174)
TPS_DECLARE_PROTO(175)
TPS_DECLARE_PROTO(176)
TPS_DECLARE_PROTO(177)
TPS_DECLARE_PROTO(178)
TPS_DECLARE_PROTO(179)
TPS_DECLARE_PROTO(180)
TPS_DECLARE_PROTO(181)
TPS_DECLARE_PROTO(182)
TPS_DECLARE_PROTO(183)
TPS_DECLARE_PROTO(184)
TPS_DECLARE_PROTO(185)
TPS_DECLARE_PROTO(186)
TPS_DECLARE_PROTO(187)
TPS_DECLARE_PROTO(188)
TPS_DECLARE_PROTO(189)
TPS_DECLARE_PROTO(190)
TPS_DECLARE_PROTO(191)
TPS_DECLARE_PROTO(192)
TPS_DECLARE_PROTO(193)
TPS_DECLARE_PROTO(194)
TPS_DECLARE_PROTO(195)
TPS_DECLARE_PROTO(196)
TPS_DECLARE_PROTO(197)
TPS_DECLARE_PROTO(198)
TPS_DECLARE_PROTO(199)
TPS_DECLARE_PROTO(200)
TPS_DECLARE_PROTO(201)
TPS_DECLARE_PROTO(202)
TPS_DECLARE_PROTO(203)
TPS_DECLARE_PROTO(204)
TPS_DECLARE_PROTO(205)
TPS_DECLARE_PROTO(206)
TPS_DECLARE_PROTO(207)
TPS_DECLARE_PROTO(208)
TPS_DECLARE_PROTO(209)
TPS_DECLARE_PROTO(210)
TPS_DECLARE_PROTO(211)
TPS_DECLARE_PROTO(212)
TPS_DECLARE_PROTO(213)
TPS_DECLARE_PROTO(214)
TPS_DECLARE_PROTO(215)
TPS_DECLARE_PROTO(216)
TPS_DECLARE_PROTO(217)
TPS_DECLARE_PROTO(218)
TPS_DECLARE_PROTO(219)
TPS_DECLARE_PROTO(220)
TPS_DECLARE_PROTO(221)
TPS_DECLARE_PROTO(222)
TPS_DECLARE_PROTO(223)
TPS_DECLARE_PROTO(224)
TPS_DECLARE_PROTO(225)
TPS_DECLARE_PROTO(226)
TPS_DECLARE_PROTO(227)
TPS_DECLARE_PROTO(228)
TPS_DECLARE_PROTO(229)
TPS_DECLARE_PROTO(230)
TPS_DECLARE_PROTO(231)
TPS_DECLARE_PROTO(232)
TPS_DECLARE_PROTO(233)
TPS_DECLARE_PROTO(234)
TPS_DECLARE_PROTO(235)
TPS_DECLARE_PROTO(236)
TPS_DECLARE_PROTO(237)
TPS_DECLARE_PROTO(238)
TPS_DECLARE_PROTO(239)
TPS_DECLARE_PROTO(240)
TPS_DECLARE_PROTO(241)
TPS_DECLARE_PROTO(242)
TPS_DECLARE_PROTO(243)
TPS_DECLARE_PROTO(244)
TPS_DECLARE_PROTO(245)
TPS_DECLARE_PROTO(246)
TPS_DECLARE_PROTO(247)
TPS_DECLARE_PROTO(248)
TPS_DECLARE_PROTO(249)
TPS_DECLARE_PROTO(250)
TPS_DECLARE_PROTO(251)
TPS_DECLARE_PROTO(252)
TPS_DECLARE_PROTO(253)
TPS_DECLARE_PROTO(254)
TPS_DECLARE_PROTO(255)
#endif //T_PAGESTRESS_LARGE_ARRAY

typedef TInt TpsFuncPtr(TInt aParam1, TInt aParam2);

#ifdef TPS_DECLARE_ARRAY

#define TPS_FUNC(_num) &TestAlignment##_num

TpsFuncPtr * PagestressFuncPtrs[] = 
{
	TPS_FUNC(0),
	TPS_FUNC(1),
	TPS_FUNC(2),
	TPS_FUNC(3),
	TPS_FUNC(4),
	TPS_FUNC(5),
	TPS_FUNC(6),
	TPS_FUNC(7),
	TPS_FUNC(8),
	TPS_FUNC(9),
	TPS_FUNC(10),
	TPS_FUNC(11),
	TPS_FUNC(12),
	TPS_FUNC(13),
	TPS_FUNC(14),
	TPS_FUNC(15),
	TPS_FUNC(16),
	TPS_FUNC(17),
	TPS_FUNC(18),
	TPS_FUNC(19),
	TPS_FUNC(20),
	TPS_FUNC(21),
	TPS_FUNC(22),
	TPS_FUNC(23),
	TPS_FUNC(24),
	TPS_FUNC(25),
	TPS_FUNC(26),
	TPS_FUNC(27),
	TPS_FUNC(28),
	TPS_FUNC(29),
	TPS_FUNC(30),
	TPS_FUNC(31),
	TPS_FUNC(32),
	TPS_FUNC(33),
	TPS_FUNC(34),
	TPS_FUNC(35),
	TPS_FUNC(36),
	TPS_FUNC(37),
	TPS_FUNC(38),
	TPS_FUNC(39),
	TPS_FUNC(40),
	TPS_FUNC(41),
	TPS_FUNC(42),
	TPS_FUNC(43),
	TPS_FUNC(44),
	TPS_FUNC(45),
	TPS_FUNC(46),
	TPS_FUNC(47),
	TPS_FUNC(48),
	TPS_FUNC(49),
	TPS_FUNC(50),
	TPS_FUNC(51),
	TPS_FUNC(52),
	TPS_FUNC(53),
	TPS_FUNC(54),
	TPS_FUNC(55),
	TPS_FUNC(56),
	TPS_FUNC(57),
	TPS_FUNC(58),
	TPS_FUNC(59),
	TPS_FUNC(60),
	TPS_FUNC(61),
	TPS_FUNC(62),
	TPS_FUNC(63),
#ifdef T_PAGESTRESS_LARGE_ARRAY
	TPS_FUNC(64),
	TPS_FUNC(65),
	TPS_FUNC(66),
	TPS_FUNC(67),
	TPS_FUNC(68),
	TPS_FUNC(69),
	TPS_FUNC(70),
	TPS_FUNC(71),
	TPS_FUNC(72),
	TPS_FUNC(73),
	TPS_FUNC(74),
	TPS_FUNC(75),
	TPS_FUNC(76),
	TPS_FUNC(77),
	TPS_FUNC(78),
	TPS_FUNC(79),
	TPS_FUNC(80),
	TPS_FUNC(81),
	TPS_FUNC(82),
	TPS_FUNC(83),
	TPS_FUNC(84),
	TPS_FUNC(85),
	TPS_FUNC(86),
	TPS_FUNC(87),
	TPS_FUNC(88),
	TPS_FUNC(89),
	TPS_FUNC(90),
	TPS_FUNC(91),
	TPS_FUNC(92),
	TPS_FUNC(93),
	TPS_FUNC(94),
	TPS_FUNC(95),
	TPS_FUNC(96),
	TPS_FUNC(97),
	TPS_FUNC(98),
	TPS_FUNC(99),
	TPS_FUNC(100),
	TPS_FUNC(101),
	TPS_FUNC(102),
	TPS_FUNC(103),
	TPS_FUNC(104),
	TPS_FUNC(105),
	TPS_FUNC(106),
	TPS_FUNC(107),
	TPS_FUNC(108),
	TPS_FUNC(109),
	TPS_FUNC(110),
	TPS_FUNC(111),
	TPS_FUNC(112),
	TPS_FUNC(113),
	TPS_FUNC(114),
	TPS_FUNC(115),
	TPS_FUNC(116),
	TPS_FUNC(117),
	TPS_FUNC(118),
	TPS_FUNC(119),
	TPS_FUNC(120),
	TPS_FUNC(121),
	TPS_FUNC(122),
	TPS_FUNC(123),
	TPS_FUNC(124),
	TPS_FUNC(125),
	TPS_FUNC(126),
	TPS_FUNC(127),
	TPS_FUNC(128),
	TPS_FUNC(129),
	TPS_FUNC(130),
	TPS_FUNC(131),
	TPS_FUNC(132),
	TPS_FUNC(133),
	TPS_FUNC(134),
	TPS_FUNC(135),
	TPS_FUNC(136),
	TPS_FUNC(137),
	TPS_FUNC(138),
	TPS_FUNC(139),
	TPS_FUNC(140),
	TPS_FUNC(141),
	TPS_FUNC(142),
	TPS_FUNC(143),
	TPS_FUNC(144),
	TPS_FUNC(145),
	TPS_FUNC(146),
	TPS_FUNC(147),
	TPS_FUNC(148),
	TPS_FUNC(149),
	TPS_FUNC(150),
	TPS_FUNC(151),
	TPS_FUNC(152),
	TPS_FUNC(153),
	TPS_FUNC(154),
	TPS_FUNC(155),
	TPS_FUNC(156),
	TPS_FUNC(157),
	TPS_FUNC(158),
	TPS_FUNC(159),
	TPS_FUNC(160),
	TPS_FUNC(161),
	TPS_FUNC(162),
	TPS_FUNC(163),
	TPS_FUNC(164),
	TPS_FUNC(165),
	TPS_FUNC(166),
	TPS_FUNC(167),
	TPS_FUNC(168),
	TPS_FUNC(169),
	TPS_FUNC(170),
	TPS_FUNC(171),
	TPS_FUNC(172),
	TPS_FUNC(173),
	TPS_FUNC(174),
	TPS_FUNC(175),
	TPS_FUNC(176),
	TPS_FUNC(177),
	TPS_FUNC(178),
	TPS_FUNC(179),
	TPS_FUNC(180),
	TPS_FUNC(181),
	TPS_FUNC(182),
	TPS_FUNC(183),
	TPS_FUNC(184),
	TPS_FUNC(185),
	TPS_FUNC(186),
	TPS_FUNC(187),
	TPS_FUNC(188),
	TPS_FUNC(189),
	TPS_FUNC(190),
	TPS_FUNC(191),
	TPS_FUNC(192),
	TPS_FUNC(193),
	TPS_FUNC(194),
	TPS_FUNC(195),
	TPS_FUNC(196),
	TPS_FUNC(197),
	TPS_FUNC(198),
	TPS_FUNC(199),
	TPS_FUNC(200),
	TPS_FUNC(201),
	TPS_FUNC(202),
	TPS_FUNC(203),
	TPS_FUNC(204),
	TPS_FUNC(205),
	TPS_FUNC(206),
	TPS_FUNC(207),
	TPS_FUNC(208),
	TPS_FUNC(209),
	TPS_FUNC(210),
	TPS_FUNC(211),
	TPS_FUNC(212),
	TPS_FUNC(213),
	TPS_FUNC(214),
	TPS_FUNC(215),
	TPS_FUNC(216),
	TPS_FUNC(217),
	TPS_FUNC(218),
	TPS_FUNC(219),
	TPS_FUNC(220),
	TPS_FUNC(221),
	TPS_FUNC(222),
	TPS_FUNC(223),
	TPS_FUNC(224),
	TPS_FUNC(225),
	TPS_FUNC(226),
	TPS_FUNC(227),
	TPS_FUNC(228),
	TPS_FUNC(229),
	TPS_FUNC(230),
	TPS_FUNC(231),
	TPS_FUNC(232),
	TPS_FUNC(233),
	TPS_FUNC(234),
	TPS_FUNC(235),
	TPS_FUNC(236),
	TPS_FUNC(237),
	TPS_FUNC(238),
	TPS_FUNC(239),
	TPS_FUNC(240),
	TPS_FUNC(241),
	TPS_FUNC(242),
	TPS_FUNC(243),
	TPS_FUNC(244),
	TPS_FUNC(245),
	TPS_FUNC(246),
	TPS_FUNC(247),
	TPS_FUNC(248),
	TPS_FUNC(249),
	TPS_FUNC(250),
	TPS_FUNC(251),
	TPS_FUNC(252),
	TPS_FUNC(253),
	TPS_FUNC(254),
	TPS_FUNC(255),
#endif //T_PAGESTRESS_LARGE_ARRAY
};

#define PAGESTRESS_FUNC_COUNT (TUint32)(sizeof(PagestressFuncPtrs) / sizeof(TUint32))

#endif // TPS_DECLARE_ARRAY

#include "d_pagestress.h"

#endif //_T_PAGESTRESS_H_

