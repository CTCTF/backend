exports.grade = function(team, key, callback) {
	if (typeof key === "string" && key.toLowerCase().indexOf("your_overflow_skillz_are_pretty_buf") != -1) {
		callback({
			correct: true,
			message: "Nice job!"
		});
	} else {
		callback({
			correct: false,
			message: "Hm... try again."
		});
	}
};