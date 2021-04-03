\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"
		\key d \major

		R1*6  |
		a' 2 a'  |
		g' 4 fis' d' fis'  |
		e' 2 cis'  |
%% 10
		R1  |
		cis' 2 cis' 4 cis'  |
		d' 4 cis' 8 b a 4 cis'  |
		a 1  |
		R1  |
%% 15
		a' 2 a'  |
		g' 4 fis' d' fis'  |
		e' 2 cis'  |
		R1  |
		cis' 2 cis' 4 cis'  |
%% 20
		d' 4 d' 8 d' d' 4 d'  |
		c' 2. r8 g  |
		cis' 4 cis' 8 cis' 4 cis' r8  |
		c' 4 c' 8 c' 4 c' g 8  |
		cis' 8 cis' cis' cis' 4 cis' r8  |
%% 25
		R1*2  |
		a' 2 a' 4 a'  |
		g' 4 fis' d' fis'  |
		e' 4 cis' 8 cis' 4 cis' ~ cis' 8  |
%% 30
		R1  |
		cis' 2 cis'  |
		d' 4 cis' a cis'  |
		a 2. r4  |
		g' 4 fis' 8 d' 4 a a 8  |
%% 35
		e' 4 e' 8 fis' a' fis' e' 4  |
		g' 4 fis' 8 d' 4 a a 8  |
		fis' 4 fis' 8 fis' fis' fis' fis' 4  |
		g' 4 r g' 8 g' g' 4  |
		e' 2 e' ~  |
%% 40
		e' 2. r4  |
		r4 a' 8 a' a' a' a' a'  |
		g' 8 g' g' g' 4 g' r8  |
		d' 4 d' 8 d' 4 d' 8 d' 4  |
		cis' 2 cis'  |
%% 45
		r4 a' 8 a' a' a' a' a'  |
		g' 8 g' g' g' 4 g' d' 8  |
		d' 4 d' d' d'  |
		c' 8 c' c' 2.  |
		r4 e' 8 e' e' e' e' e'  |
%% 50
		g' 8 g' g' g' 4 g' r8  |
		d' 4 d' 8 d' 4 d' 8 d' 4  |
		cis' 2 cis' ~  |
		cis' 2 r4 a 8 a  |
		fis' 4 gis' 8 a' 4. fis' 4  |
%% 55
		g' 4 fis' 8 d' 4 a r8  |
		e' 8 e' e' fis' a' fis' e' 4  |
		g' 4 fis' 8 d' 4 d' r8  |
		fis' 4 fis' 8 fis' fis' fis' fis' 4  |
		g' 4 g' 8 g' g' g' g' 4  |
%% 60
		e' 2 e' ~  |
		e' 2 r  |
		R1*2  |
		a' 2 a'  |
%% 65
		g' 4 fis' d' fis'  |
		e' 2 cis'  |
		R1  |
		cis' 2 cis' 4 cis'  |
		d' 4 cis' 8 b a 4 cis'  |
%% 70
		a 1  |
		R1  |
		a' 2 a'  |
		g' 4 fis' d' fis'  |
		e' 2 cis'  |
%% 75
		R1  |
		cis' 2 cis' 4 cis'  |
		d' 4 d' 8 d' d' 4 d'  |
		fis' 1  |
		g' 1  |
%% 80
		e' 1  |
		R1  |
                \bar "|."
	}

	\new Lyrics \lyricsto "mezzo" {
		Glo -- ria a Dios en el cie -- lo
		y en la tie -- "rra a" los hom -- bres paz.
		Glo -- ria a Dios en el cie -- lo
		y en la tie -- "rra a" los hom -- bres paz.

		"...Te" ben -- de -- ci -- mos,
		"te a" -- do -- ra -- mos, te glo -- ri -- fi -- ca -- mos.
		Te da -- mos gra -- cias por "Tu in" -- men -- sa glo -- ria __
		Se -- ñor, Dios, rey ce -- les -- tial.

		%Dios Pa -- dre to -- do
		                         po -- de -- ro -- so,
		Se -- ñor, Hi -- jo ú -- ni -- co Je -- su -- cris -- to,
		Se -- ñor Dios, Cor -- de -- ro de Dios, Hi -- jo del Pa -- dre. __

		Tú que qui -- tas el pe -- ca -- do del mun -- do,
		ten pie -- dad de no -- so -- tros.
		Tú que qui -- tas el pe -- ca -- do del mun -- do,
		a -- tien -- "de a" nues -- tra sú -- pli -- ca.
		Tú "que es" -- tás a la de -- re -- cha del Pa -- dre,
		ten pie -- dad de no -- so -- tros. __

		Por -- que so -- la -- men -- te "Tú e" -- res san -- to,
		só -- lo Tú, al -- tí -- si -- mo, Je -- su cris -- to.
		Con el Es -- pí -- ri -- tu San -- "to en" la glo -- ria del Pa -- dre. __

		Glo -- ria a Dios en el cie -- lo
		y en la tie -- "rra a" los hom -- bres paz.
		Glo -- ria a Dios en el cie -- lo
		y en la tie -- "rra a" los hom -- bres paz.

		A -- mén.
	}
>>
