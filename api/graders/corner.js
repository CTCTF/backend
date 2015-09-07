exports.grade = function(team, key, callback) {
	if (typeof key === "string" && key.toLowerCase().indexOf("don't_take_food") != -1) {
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