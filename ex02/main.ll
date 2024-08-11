; ModuleID = 'main.cpp'
source_filename = "main.cpp"
target datalayout = "e-m:o-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.14.0"

%class.Hello = type { i32, i32, i32 }

; Function Attrs: noinline norecurse optnone ssp uwtable
define i32 @main() #0 {
  %1 = alloca %class.Hello, align 4
  %2 = alloca %class.Hello, align 4
  %3 = alloca %class.Hello, align 4
  %4 = alloca %class.Hello, align 4
  %5 = alloca %class.Hello, align 4
  call void @_ZN5HelloC1Ev(%class.Hello* %1)
  call void @_ZN5HelloC1Ev(%class.Hello* %2)
  call void @_ZN5HelloC1Ei(%class.Hello* %3, i32 10)
  call void @_ZN5HelloC1Eii(%class.Hello* %4, i32 10, i32 20)
  call void @_ZN5HelloC1Eiii(%class.Hello* %5, i32 10, i32 20, i32 30)
  ret i32 0
}

; Function Attrs: noinline optnone ssp uwtable
define linkonce_odr void @_ZN5HelloC1Ev(%class.Hello*) unnamed_addr #1 align 2 {
  %2 = alloca %class.Hello*, align 8
  store %class.Hello* %0, %class.Hello** %2, align 8
  %3 = load %class.Hello*, %class.Hello** %2, align 8
  call void @_ZN5HelloC2Ev(%class.Hello* %3)
  ret void
}

; Function Attrs: noinline optnone ssp uwtable
define linkonce_odr void @_ZN5HelloC1Ei(%class.Hello*, i32) unnamed_addr #1 align 2 {
  %3 = alloca %class.Hello*, align 8
  %4 = alloca i32, align 4
  store %class.Hello* %0, %class.Hello** %3, align 8
  store i32 %1, i32* %4, align 4
  %5 = load %class.Hello*, %class.Hello** %3, align 8
  %6 = load i32, i32* %4, align 4
  call void @_ZN5HelloC2Ei(%class.Hello* %5, i32 %6)
  ret void
}

; Function Attrs: noinline optnone ssp uwtable
define linkonce_odr void @_ZN5HelloC1Eii(%class.Hello*, i32, i32) unnamed_addr #1 align 2 {
  %4 = alloca %class.Hello*, align 8
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  store %class.Hello* %0, %class.Hello** %4, align 8
  store i32 %1, i32* %5, align 4
  store i32 %2, i32* %6, align 4
  %7 = load %class.Hello*, %class.Hello** %4, align 8
  %8 = load i32, i32* %5, align 4
  %9 = load i32, i32* %6, align 4
  call void @_ZN5HelloC2Eii(%class.Hello* %7, i32 %8, i32 %9)
  ret void
}

; Function Attrs: noinline optnone ssp uwtable
define linkonce_odr void @_ZN5HelloC1Eiii(%class.Hello*, i32, i32, i32) unnamed_addr #1 align 2 {
  %5 = alloca %class.Hello*, align 8
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  store %class.Hello* %0, %class.Hello** %5, align 8
  store i32 %1, i32* %6, align 4
  store i32 %2, i32* %7, align 4
  store i32 %3, i32* %8, align 4
  %9 = load %class.Hello*, %class.Hello** %5, align 8
  %10 = load i32, i32* %6, align 4
  %11 = load i32, i32* %7, align 4
  %12 = load i32, i32* %8, align 4
  call void @_ZN5HelloC2Eiii(%class.Hello* %9, i32 %10, i32 %11, i32 %12)
  ret void
}

; Function Attrs: noinline nounwind optnone ssp uwtable
define linkonce_odr void @_ZN5HelloC2Ev(%class.Hello*) unnamed_addr #2 align 2 {
  %2 = alloca %class.Hello*, align 8
  store %class.Hello* %0, %class.Hello** %2, align 8
  %3 = load %class.Hello*, %class.Hello** %2, align 8
  ret void
}

; Function Attrs: noinline nounwind optnone ssp uwtable
define linkonce_odr void @_ZN5HelloC2Ei(%class.Hello*, i32) unnamed_addr #2 align 2 {
  %3 = alloca %class.Hello*, align 8
  %4 = alloca i32, align 4
  store %class.Hello* %0, %class.Hello** %3, align 8
  store i32 %1, i32* %4, align 4
  %5 = load %class.Hello*, %class.Hello** %3, align 8
  %6 = load i32, i32* %4, align 4
  %7 = getelementptr inbounds %class.Hello, %class.Hello* %5, i32 0, i32 0
  store i32 %6, i32* %7, align 4
  ret void
}

; Function Attrs: noinline nounwind optnone ssp uwtable
define linkonce_odr void @_ZN5HelloC2Eii(%class.Hello*, i32, i32) unnamed_addr #2 align 2 {
  %4 = alloca %class.Hello*, align 8
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  store %class.Hello* %0, %class.Hello** %4, align 8
  store i32 %1, i32* %5, align 4
  store i32 %2, i32* %6, align 4
  %7 = load %class.Hello*, %class.Hello** %4, align 8
  %8 = load i32, i32* %5, align 4
  %9 = getelementptr inbounds %class.Hello, %class.Hello* %7, i32 0, i32 0
  store i32 %8, i32* %9, align 4
  %10 = load i32, i32* %6, align 4
  %11 = getelementptr inbounds %class.Hello, %class.Hello* %7, i32 0, i32 1
  store i32 %10, i32* %11, align 4
  ret void
}

; Function Attrs: noinline nounwind optnone ssp uwtable
define linkonce_odr void @_ZN5HelloC2Eiii(%class.Hello*, i32, i32, i32) unnamed_addr #2 align 2 {
  %5 = alloca %class.Hello*, align 8
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  store %class.Hello* %0, %class.Hello** %5, align 8
  store i32 %1, i32* %6, align 4
  store i32 %2, i32* %7, align 4
  store i32 %3, i32* %8, align 4
  %9 = load %class.Hello*, %class.Hello** %5, align 8
  %10 = load i32, i32* %6, align 4
  %11 = getelementptr inbounds %class.Hello, %class.Hello* %9, i32 0, i32 0
  store i32 %10, i32* %11, align 4
  %12 = load i32, i32* %7, align 4
  %13 = getelementptr inbounds %class.Hello, %class.Hello* %9, i32 0, i32 1
  store i32 %12, i32* %13, align 4
  %14 = load i32, i32* %8, align 4
  %15 = getelementptr inbounds %class.Hello, %class.Hello* %9, i32 0, i32 2
  store i32 %14, i32* %15, align 4
  ret void
}

attributes #0 = { noinline norecurse optnone ssp uwtable "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { noinline optnone ssp uwtable "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #2 = { noinline nounwind optnone ssp uwtable "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="penryn" "target-features"="+cx16,+fxsr,+mmx,+sahf,+sse,+sse2,+sse3,+sse4.1,+ssse3,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.module.flags = !{!0, !1, !2}
!llvm.ident = !{!3}

!0 = !{i32 2, !"SDK Version", [2 x i32] [i32 10, i32 15]}
!1 = !{i32 1, !"wchar_size", i32 4}
!2 = !{i32 7, !"PIC Level", i32 2}
!3 = !{!"Apple clang version 11.0.0 (clang-1100.0.33.17)"}
