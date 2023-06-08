SELECT doctors.name, ROUND(SUM(attendances.hours * 150 + work_shifts.bonus * 0.01 * attendances.hours * 150), 1) AS "salary"
FROM doctors JOIN attendances ON doctors.id = attendances.id_doctor
			 JOIN work_shifts ON attendances.id_work_shift = work_shifts.id
             GROUP BY doctors.name
             ORDER BY salary DESC;
