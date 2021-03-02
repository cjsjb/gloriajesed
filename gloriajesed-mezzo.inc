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
		\key a \major

		R1*6  |
		cis'' 2 cis''  |
		d'' 4 cis'' b' cis''  |
		a' 2 e'  |
%% 10
		R1  |
		e' 2 e' 4 e'  |
		g' 4 fis' 8 e' d' 4 fis'  |
		e' 1  |
		R1  |
%% 15
		cis'' 2 cis''  |
		d'' 4 cis'' b' cis''  |
		a' 2 e'  |
		R1  |
		e' 2 e' 4 e'  |
%% 20
		g' 4 fis' 8 e' d' 4 fis'  |
		e' 2. r8 r  |
		a' 4 a' 8 a' 4 a' r8  |
		g' 4 g' 8 g' 4 g' r8  |
		a' 8 a' a' a' 4 a' r8  |
%% 25
		R1*2  |
		cis'' 2 cis'' 4 cis''  |
		d'' 4 cis'' b' cis''  |
		a' 4 e' 8 e' 4 e' ~ e' 8 ~  |
%% 30
		e' 2 r  |
		e' 2 e'  |
		g' 4 fis' d' fis'  |
		e' 2. r4  |
		b' 4 a' 8 g' 4 g' d' 8  |
%% 35
		a' 4 a' 8 b' cis'' b' a' 4  |
		b' 4 a' 8 g' 4 g' d' 8  |
		a' 4 a' 8 b' cis'' b' a' 4  |
		b' 4 r b' 8 a' g' 4  |
		a' 2 a' ~  |
%% 40
		a' 2. r4  |
		r4 a' 8 a' a' a' a' a'  |
		g' 8 g' g' g' 4 g' r8  |
		fis' 4 fis' 8 fis' 4 e' 8 d' 4  |
		e' 2 e'  |
%% 45
		r4 a' 8 a' a' a' a' a'  |
		g' 8 g' g' g' 4 g' g' 8  |
		fis' 4 fis' e' d'  |
		e' 8 e' e' 2.  |
		r4 e' 8 e' e' e' e' e'  |
%% 50
		g' 8 g' g' g' 4 g' r8  |
		fis' 4 fis' 8 fis' 4 e' 8 d' 4  |
		e' 2 e' ~  |
		e' 2 r4 e' 8 e'  |
		a' 4 b' 8 cis'' 4. a' 4  |
%% 55
		b' 4 a' 8 g' 4 g' r8  |
		a' 8 a' a' b' cis'' b' a' 4  |
		b' 4 a' 8 g' 4 g' r8  |
		a' 4 a' 8 b' cis'' b' a' 4  |
		b' 4 b' 8 b' b' a' g' 4  |
%% 60
		a' 2 a' ~  |
		a' 2 r  |
		R1*2  |
		cis'' 2 cis''  |
%% 65
		d'' 4 cis'' b' cis''  |
		a' 2 e'  |
		R1  |
		e' 2 e' 4 e'  |
		g' 4 fis' 8 e' d' 4 fis'  |
%% 70
		e' 1  |
		R1  |
		cis'' 2 cis''  |
		d'' 4 cis'' b' cis''  |
		a' 2 e'  |
%% 75
		R1  |
		e' 2 e' 4 e'  |
		g' 4 fis' 8 e' d' 4 fis'  |
		a' 1  |
		b' 1  |
%% 80
		a' 1  |
		R1  |
                \bar "|."
	}

	\new Lyrics \lyricsto "mezzo" {
		Glo -- ria a Dios en el cie -- lo
		y en la tie -- "rra a" los hom -- bres paz.
		Glo -- ria a Dios en el cie -- lo
		y en la tie -- "rra a" los hom -- bres paz.

		"...Te" ben -- de -- ci -- mos,
		"te a" -- do -- ra -- mos, te glo -- ri -- fi %-- ca -- mos.
		Te da -- mos gra -- cias por "Tu in" -- men -- sa glo -- ria
		Se -- ñor, Dios, rey ce -- les -- tial.

		%Dios Pa -- dre to -- do
		                         po -- de -- ro -- so,
		Se -- ñor, Hi -- jo ú -- ni -- co Je -- su -- cris -- to,
		Se -- ñor Dios, Cor -- de -- ro de Dios, Hi -- jo del Pa -- dre.

		Tú que qui -- tas el pe -- ca -- do del mun -- do,
		ten pie -- dad de no -- so -- tros.
		Tú que qui -- tas el pe -- ca -- do del mun -- do,
		a -- tien -- "de a" nues -- tra sú -- pli -- ca.
		Tú "que es" -- tás a la de -- re -- cha del Pa -- dre,
		ten pie -- dad de no -- so -- tros.

		Por -- que so -- la -- men -- te "Tú e" -- res san -- to,
		só -- lo Tú, al -- tí -- si -- mo, Je -- su cris -- to.
		Con el Es -- pí -- ri -- tu San -- "to en" la glo -- ria del Pa -- dre. __

		Glo -- ria a Dios en el cie -- lo
		y en la tie -- "rra a" los hom -- bres paz.
		Glo -- ria a Dios en el cie -- lo __
		y en la tie -- "rra a" los hom -- bres paz.

		A -- mén.
	}
>>
