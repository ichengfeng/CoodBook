//
//  NSDate+Calendar.h
//  BD
//
//  Created by Podinn on 2017/9/11.
//  Copyright © 2017年 杭州睿创科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 日期、时间
 */
@interface NSDate (Calendar)

/**********************************************************
 *@Description:获取当天的包括“年”，“月”，“日”，“周”，“时”，“分”，“秒”的NSDateComponents
 *@Params:nil
 *@Return:当天的包括“年”，“月”，“日”，“周”，“时”，“分”，“秒”的NSDateComponents
 ***********************************************************/
- (NSDateComponents *)componentsOfDay;

- (NSInteger)weekdayOrdinal;

/****************************************************
 *@Description:获得NSDate对应的年份
 *@Params:nil
 *@Return:NSDate对应的年份
 ****************************************************/
- (NSUInteger)year;

/****************************************************
 *@Description:获得NSDate对应的月份
 *@Params:nil
 *@Return:NSDate对应的月份
 ****************************************************/
- (NSUInteger)month;

/****************************************************
 *@Description:获得NSDate对应的日期
 *@Params:nil
 *@Return:NSDate对应的日期
 ****************************************************/
- (NSUInteger)day;

/****************************************************
 *@Description:获得NSDate对应的小时数
 *@Params:nil
 *@Return:NSDate对应的小时数
 ****************************************************/
- (NSUInteger)hour;

/****************************************************
 *@Description:获得NSDate对应的分钟数
 *@Params:nil
 *@Return:NSDate对应的分钟数
 ****************************************************/
- (NSUInteger)minute;

/****************************************************
 *@Description:获得NSDate对应的秒数
 *@Params:nil
 *@Return:NSDate对应的秒数
 ****************************************************/
- (NSUInteger)second;

/****************************************************
 *@Description:获得NSDate对应的星期
 *@Params:nil
 *@Return:NSDate对应的星期
 ****************************************************/
- (NSUInteger)weekday;

/****************************************************
 *@Description:获得NSDate对应的周数
 *@Params:nil
 *@Return:NSDate对应的周数
 ****************************************************/
- (NSUInteger)week;

/******************************************
 *@Description:获取当天的起始时间（00:00:00）
 *@Params:nil
 *@Return:当天的起始时间
 ******************************************/
- (NSDate *)beginingOfDay;

/******************************************
 *@Description:获取当天的结束时间（23:59:59）
 *@Params:nil
 *@Return:当天的结束时间
 ******************************************/
- (NSDate *)endOfDay;

/******************************************
 *@Description:获取当月的第一天
 *@Params:nil
 *@Return:当月的第一天
 ******************************************/
- (NSDate *)firstDayOfTheMonth;

/******************************************
 *@Description:获取当月的最后一天
 *@Params:nil
 *@Return:当月的最后一天
 ******************************************/
- (NSDate *)lastDayOfTheMonth;

/******************************************
 *@Description:获取前一个月的第一天
 *@Params:nil
 *@Return:前一个月的第一天
 ******************************************/
- (NSDate *)firstDayOfThePreviousMonth;


/******************************************
 *@Description:获取后一个月的第一天
 *@Params:nil
 *@Return:后一个月的第一天
 ******************************************/
- (NSDate *)firstDayOfTheFollowingMonth;

/******************************************
 *@Description:获取前一个月中与当天对应的日期
 *@Params:nil
 *@Return:前一个月中与当天对应的日期
 ******************************************/
- (NSDate *)associateDayOfThePreviousMonth;

/******************************************
 *@Description:获取后一个月中与当天对应的日期
 *@Params:nil
 *@Return:后一个月中与当天对应的日期
 ******************************************/
- (NSDate *)associateDayOfTheFollowingMonth;

/******************************************
 *@Description:获取当月的天数
 *@Params:nil
 *@Return:当月的天数
 ******************************************/
- (NSUInteger)numberOfDaysInMonth;

/******************************************
 *@Description:获取当月的周数
 *@Params:nil
 *@Return:当月的周数
 ******************************************/
- (NSUInteger)numberOfWeeksInMonth;

/******************************************
 *@Description:获取这一周的第一天
 *@Params:nil
 *@Return:这一周的第一天
 ******************************************/
- (NSDate *)firstDayOfTheWeek;

/******************************************
 *@Description:获取当月中，前一周的第一天
 *@Params:nil
 *@Return:前一周的第一天
 ******************************************/
- (NSDate *)firstDayOfThePreviousWeekInTheMonth;

/******************************************
 *@Description:获取前一个月中，最后一周的第一天
 *@Params:nil
 *@Return:前一个月中，最后一周的第一天
 ******************************************/
- (NSDate *)firstDayOfTheLastWeekInPreviousMonth;

/******************************************
 *@Description:获取当月中，后一周的第一天
 *@Params:nil
 *@Return:后一周的第一天
 ******************************************/
- (NSDate *)firstDayOfTheFollowingWeekInTheMonth;

/******************************************
 *@Description:获取下一个月中，最前一周的第一天
 *@Params:nil
 *@Return:下一个月中，最前一周的第一天
 ******************************************/
- (NSDate *)firstDayOfTheFirstWeekInFollowingMonth;

/******************************************
 *@Description:获取当月中，这一周的第一天
 *@Params:nil
 *@Return:当月中，这一周的第一天
 ******************************************/
- (NSDate *)firstDayOfTheWeekInTheMonth;

/******************************************
 *@Description:获取当月中，这一周的天数
 *@Params:nil
 *@Return:当月中，这一周的天数
 ******************************************/
- (NSUInteger)numberOfDaysInTheWeekInMonth;

/******************************************
 *@Description:获取当天是当月的第几周
 *@Params:nil
 *@Return:当天是当月的第几周
 ******************************************/
- (NSUInteger)weekOfDayInMonth;

/******************************************
 *@Description:获取当天是当年的第几周
 *@Params:nil
 *@Return:当天是当年的第几周
 ******************************************/
- (NSUInteger)weekOfDayInYear;

/******************************************
 *@Description:获取前一周中与当天对应的日期
 *@Params:nil
 *@Return:前一个周中与当天对应的日期
 ******************************************/
- (NSDate *)associateDayOfThePreviousWeek;

/******************************************
 *@Description:获取后一周中与当天对应的日期
 *@Params:nil
 *@Return:后一周中与当天对应的日期
 ******************************************/
- (NSDate *)associateDayOfTheFollowingWeek;

/******************************************
 *@Description:前一天
 *@Params:nil
 *@Return:前一天
 ******************************************/
- (NSDate *)previousDay;

/******************************************
 *@Description:后一天
 *@Params:nil
 *@Return:后一天
 ******************************************/
- (NSDate *)followingDay;

/******************************************
 *@Description:判断与某一天是否为同一天
 *@Params:
 *  otherDate:某一天
 *@Return:YES-同一天；NO-不同一天
 ******************************************/
- (BOOL)sameDayWithDate:(NSDate *)otherDate;

/******************************************
 *@Description:判断与某一天是否为同一周
 *@Params:
 *  otherDate:某一天
 *@Return:YES-同一周；NO-不同一周
 ******************************************/
- (BOOL)sameWeekWithDate:(NSDate *)otherDate;

/******************************************
 *@Description:判断与某一天是否为同一月
 *@Params:
 *  otherDate:某一天
 *@Return:YES-同一月；NO-不同一月
 ******************************************/
- (BOOL)sameMonthWithDate:(NSDate *)otherDate;

/******************************************
 *@Description:获取后 三个月的第一天
 *@Params:nil
 *@Return:后三个月的第一天
 ******************************************/
- (NSDate *)firstDayOfTheThirdMonth;

/**
 *  判断这一年是否是闰年
 *
 *  @param year 年份
 *
 *  @return BOOL
 */
+ (BOOL)isLeapYear:(NSUInteger)year;

/**
 *  获取当前月份中的天数
 *
 *  @param month 月份
 *  @param year  年份
 *
 *  @return 天数
 */
+ (NSUInteger)numberDaysInCurrentMonth:(NSUInteger)month withYear:(NSUInteger)year;


@end
