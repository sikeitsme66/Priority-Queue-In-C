<h1>🧮 Priority Queue in C</h1>

<p>
This project is a simple implementation of a Priority Queue in C. It demonstrates insertion, deletion, and display operations in a fixed-size priority queue using arrays.
</p>

<h2>📘 What is a Priority Queue?</h2>

<p>
A <strong>priority queue</strong> is a special type of queue in which each element is associated with a priority. Elements are served based on their priority — higher priority elements are dequeued before lower priority ones. If two elements have the same priority, they are served according to their order in the queue (FIFO).
</p>

<h2>✨ Features</h2>

<ul>
  <li>Insert elements into the priority queue</li>
  <li>Delete specific elements from the queue</li>
  <li>Automatically sorts elements based on priority (higher number = higher priority)</li>
  <li>View the current contents of the priority queue</li>
  <li>Handles queue overflow and underflow conditions</li>
</ul>

<h2>🛠️ How to Compile and Run</h2>

<h3>1. Compile the code</h3>

<p><strong>On Linux/macOS:</strong></p>
<pre><code>gcc -o priority_queue priority_queue.c</code></pre>

<p><strong>On Windows (using gcc via MinGW or similar):</strong></p>
<pre><code>gcc -o priority_queue.exe priority_queue.c</code></pre>

<p><em>Replace <code>priority_queue.c</code> with your actual C file name if different.</em></p>

<h3>2. Run the program</h3>

<p><strong>On Linux/macOS:</strong></p>
<pre><code>./priority_queue</code></pre>

<p><strong>On Windows:</strong></p> 
<pre><code>priority_queue.exe</code></pre>