<html>
  <head>
  </head>
  <body>
    <header>
      <h1>bin2dec</h1>
    </header>
    <main>
      <article>
        <section>
          <h2>bin2dec is a binary to decimal convertor</h2>
          <p>bin2dec is a CLI tool to convert binary numbers to decimal numbers. I built this CLI app to solve and handle some problems in exceptional situations about developing Bash/Batch scripts when they need to know binary format.</p>
        </section>
        <section>
          <h3>Below there are three example of running code in action:</h3>
          <section>
            <h4>Run with command line argument:<h4>
            <pre>
              $ ./bin2dec 10000000
              128
            </pre>
            <p>Simply it converts 10000000 from binary to '128' as a decimal number.</p>
          </section>
          <section>
            <h4>Use output in terminal or Bash scripts:<h4>
            <pre>
              $ bo=$(./bin2dec 10000000)
              $ expr $bo - 28
              100
              $ echo print $bo - 28 | python -
              100
            </pre>
            <p>You can use output as a decimal number in expressions.</p>
          </section>
          <section>
            <h4>Run without command line argument(Interactive mode):<h4>
            <pre>
              $ ./bin2dec
              bin2dec - Binary to Decimal Convertor Version 4.0
              Copyright (c) 2015-2019 e-job@protonmail.com, Licensed under GPLv3+
              Enter a binary number(use only 0 and 1): 10000000
              Binary(10000000) = Decimal(128)
              $ 
            </pre>
          </section>
        </section>
      </article>
    </main>
    <footer>
      <p class="copyright">
        Copyright&copy; 2015-2019 <a href="mailto:e-job@protonmail.com" alt="email">e-job(at)protonmail.com</a>, Licensed under GPL<sup>v3+</sup>
      <p/>
    </footer>
  </body>
</html>
