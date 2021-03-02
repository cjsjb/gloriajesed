% This LilyPond file was generated by Rosegarden 13.04
\version "2.12.0"
\include "nederlands.ly"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Gloria"
	subtitle = "Jésed"
	tagline = "Coro Juvenil San Juan Bosco"
	instrument = "Tenor"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 4/4
	\skip 1*81
}
globalTempo = {
	\tempo 4 = 130  \skip 1*81
}

\score {
	<<
	% force offset of colliding notes in chords:
	\override Score.NoteColumn #'force-hshift = #1.0

		\include "gloriajesed-acordes.inc"
		\include "gloriajesed-tenor.inc"
	>>

	\layout { }
}
