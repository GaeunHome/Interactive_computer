# 互動式計算機
<div data-step="14" data-intro="<p>描述中 <i class='fa fa-clipboard'></i> 按鈕可協助你複製到剪貼簿，並貼到本機實驗。</p> <p>若題目有特殊的字元格式，那在範例輸入/輸出測資不適用複製貼上，請務必小心</p>">
<p>請撰寫一個計算機程式。此計算機程式可以從鍵盤讀進一連串的數字與對應的運算，輸出最後的運算結果。</p>
<ul>
<li>輸入格式：第一行是一個整數，代表初始數值。接下來有不一定行數的兩個一空白隔開的數字，代表要運算的數值以及要進行的運算。</li>
<li>輸出格式： 一個整數。</li>
</ul>
<p>運算對應的數值如下表：</p>
<table class="pure-table pure-table-bordered"><thead><tr>
<th>運算</th>
<th>數值</th>
</tr>
</thead><tbody><tr>
<td>加法</td>
<td>0</td>
</tr>
<tr>
<td>減法</td>
<td>1</td>
</tr>
<tr>
<td>乘法</td>
<td>2</td>
</tr>
<tr>
<td>除法</td>
<td>3</td>
</tr>
<tr>
<td>取餘數</td>
<td>4</td>
</tr>
</tbody></table><p>如果讀到的運算不是上述合法數值(不是0,1,2,3,4)，不需做任何運算。除法以根據C語言整數除法來做(除不盡的部份無條件捨去)。</p>
<p>提示：</p>
<ul>
<li>可檢查scanf傳回的數值，判斷是否已經讀完所有輸入。</li>
<li>使用switch-case，沒有做任何動作，放在最後的default要整個移除。</li>
</ul>
<h3 class="content-subhead">Input Example 1</h3><p>如果一開始數值是20。然後要進行的運算是先加5，然後乘以10，接著減去3，然後除以2，最後除以6取餘數。則輸入是：</p><pre><code><span class="fw-code-copy-button pure-button"><i class="fa fa-clipboard"></i></span><div id="highlighter_924587" class="syntaxhighlighter nogutter  "><table border="0" cellpadding="0" cellspacing="0"><tbody><tr><td class="code"><div class="container"><div class="line number1 index0 alt2"><code class="plain">20</code></div><div class="line number2 index1 alt1"><code class="plain">5 0</code></div><div class="line number3 index2 alt2"><code class="plain">10 2</code></div><div class="line number4 index3 alt1"><code class="plain">3 1</code></div><div class="line number5 index4 alt2"><code class="plain">2 3</code></div><div class="line number6 index5 alt1"><code class="plain">6 4</code></div></div></td></tr></tbody></table></div></code></pre><h3 class="content-subhead">Output Example 1</h3><p>20加5等於25，乘以10之後等於250，減去3之後等於247，除以2之後等於123，最後除以6的餘數是3。因此輸出是：</p><pre><code><span class="fw-code-copy-button pure-button"><i class="fa fa-clipboard"></i></span><div id="highlighter_774262" class="syntaxhighlighter nogutter  "><table border="0" cellpadding="0" cellspacing="0"><tbody><tr><td class="code"><div class="container"><div class="line number1 index0 alt2"><code class="plain">3</code></div></div></td></tr></tbody></table></div></code></pre><h3 class="content-subhead">Input Example 2</h3><p>如果輸入出現未定義的運算，如下例：</p><pre><code><span class="fw-code-copy-button pure-button"><i class="fa fa-clipboard"></i></span><div id="highlighter_808924" class="syntaxhighlighter nogutter  "><table border="0" cellpadding="0" cellspacing="0"><tbody><tr><td class="code"><div class="container"><div class="line number1 index0 alt2"><code class="plain">20</code></div><div class="line number2 index1 alt1"><code class="plain">4 -8</code></div><div class="line number3 index2 alt2"><code class="plain">5 0</code></div><div class="line number4 index3 alt1"><code class="plain">6 10</code></div><div class="line number5 index4 alt2"><code class="plain">10 2</code></div><div class="line number6 index5 alt1"><code class="plain">3 1</code></div><div class="line number7 index6 alt2"><code class="plain">7 5</code></div><div class="line number8 index7 alt1"><code class="plain">2 3</code></div><div class="line number9 index8 alt2"><code class="plain">6 4</code></div></div></td></tr></tbody></table></div></code></pre><h3 class="content-subhead">Output Example 2</h3><p>上述的三行：4 -8, 6 10, 7 5，第二個代表運算的數值都沒有定義。可以跳過。結果和範例一的運算一樣。因此輸出一樣是：</p><pre><code><span class="fw-code-copy-button pure-button"><i class="fa fa-clipboard"></i></span><div id="highlighter_292029" class="syntaxhighlighter nogutter  "><table border="0" cellpadding="0" cellspacing="0"><tbody><tr><td class="code"><div class="container"><div class="line number1 index0 alt2"><code class="plain">3</code></div></div></td></tr></tbody></table></div></code></pre></div>
