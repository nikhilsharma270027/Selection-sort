# Selection-sort
Date = CALENDARAUTO(6)
Year = "FY" & YEAR('Date'[Date]) + IF(MONTH('Date'[Date]) > 6, 1)
Quarter =
'Date'[Year] & " Q"
    & IF(
        MONTH('Date'[Date]) <= 3,
        3,
        IF(
            MONTH('Date'[Date]) <= 6,
            4,
            IF(
                MONTH('Date'[Date]) <= 9,
                1,
                2
            )
        )
    )
Month =
FORMAT('Date'[Date], "yyyy MMM")
MonthKey =
(YEAR('Date'[Date]) * 100) + MONTH('Date'[Date])
Avg Price =
AVERAGE(Sales[Unit Price])
Median Price =
MEDIAN(Sales[Unit Price])
Min Price =
MIN(Sales[Unit Price])
Max Price =
MAX(Sales[Unit Price])
Orders =
DISTINCTCOUNT(Sales[SalesOrderNumber])
Order Lines =
COUNTROWS(Sales)
Target =
IF(
	HASONEVALUE('Salesperson (Performance)'[Salesperson]),
	SUM(Targets[TargetAmount])
)
Variance =
IF(
	HASONEVALUE('Salesperson (Performance)'[Salesperson]),
	SUM(Sales[Sales]) - [Target]
)
Variance Margin =
DIVIDE([Variance], [Target])
Bikes = CALCULATE(Sum(AdventureWorks_Products[ProductCost]), AdventureWorks_Product_Categories[CategoryName] = "Bikes")
