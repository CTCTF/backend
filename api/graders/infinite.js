exports.grade = function(team, key, callback) {
	if (typeof key === "string" && key.toLowerCase().indexOf("wow_you_must_be_a_top_student") != -1) {
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