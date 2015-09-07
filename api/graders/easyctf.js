exports.grade = function(team, key, callback) {
	if (typeof key === "string" && key.toLowerCase().indexOf("this_steg_was_waaay_too_easy_to_find") != -1) {
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