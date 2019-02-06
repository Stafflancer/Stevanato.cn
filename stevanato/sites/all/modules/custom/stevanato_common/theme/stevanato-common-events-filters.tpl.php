<ul class="events-filters">
	<li>
		<span>预告</span>
		<ul>
			<?php foreach ($months as $month): ?>
				<li><a href="/events<?php print $month['query'] ?>" <?php if ($path == ('/events' . $month['query'])) print 'class="active"' ?>><?php print $month['title'] ?></a></li>
			<?php endforeach; ?>
		</ul>
	</li>

	<li>
		<span>存档</span>
		<ul>
			<li><a href="/events?archive" <?php if ($path == '/events?archive') print 'class="active"' ?>>存档</a></li>
			<?php foreach ($years as $year): ?>
				<li><a href="/events?archive=<?php print $year ?>" <?php if ($path == ('/events?archive=' . $year)) print 'class="active"' ?>><?php print $year ?></a></li>
			<?php endforeach; ?>
		</ul>
	</li>
</ul>
