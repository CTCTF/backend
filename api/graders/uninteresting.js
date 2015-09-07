exports.grade = function(team, key, callback) {
	if (typeof key === "string" && key.toLowerCase().indexOf("useless_fact_the_1st_barcode_scanned_was_for_gum") != -1) {
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