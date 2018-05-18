procedure InitializeComponent;
    begin
        self.inputBox := new System.Windows.Forms.TextBox();
        self.outputBox := new System.Windows.Forms.TextBox();
        self.encryptBtn := new System.Windows.Forms.Button();
        self.decryptBtn := new System.Windows.Forms.Button();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.modGroupBox := new System.Windows.Forms.GroupBox();
        self.customCodeBox := new System.Windows.Forms.TextBox();
        self.customCodeChk := new System.Windows.Forms.CheckBox();
        self.customPhsChk := new System.Windows.Forms.CheckBox();
        self.wtfBtn := new System.Windows.Forms.Button();
        self.modGroupBox.SuspendLayout();
        self.SuspendLayout();
        // 
        // inputBox
        // 
        self.inputBox.Location := new System.Drawing.Point(11, 41);
        self.inputBox.Multiline := true;
        self.inputBox.Name := 'inputBox';
        self.inputBox.Size := new System.Drawing.Size(305, 115);
        self.inputBox.TabIndex := 0;
        // 
        // outputBox
        // 
        self.outputBox.Location := new System.Drawing.Point(11, 196);
        self.outputBox.Multiline := true;
        self.outputBox.Name := 'outputBox';
        self.outputBox.Size := new System.Drawing.Size(305, 115);
        self.outputBox.TabIndex := 1;
        // 
        // encryptBtn
        // 
        self.encryptBtn.Location := new System.Drawing.Point(12, 318);
        self.encryptBtn.Name := 'encryptBtn';
        self.encryptBtn.Size := new System.Drawing.Size(150, 42);
        self.encryptBtn.TabIndex := 2;
        self.encryptBtn.Text := 'Encrypt';
        self.encryptBtn.UseVisualStyleBackColor := true;
        self.encryptBtn.Click += encryptBtn_Click;
        // 
        // decryptBtn
        // 
        self.decryptBtn.Location := new System.Drawing.Point(166, 318);
        self.decryptBtn.Name := 'decryptBtn';
        self.decryptBtn.Size := new System.Drawing.Size(150, 42);
        self.decryptBtn.TabIndex := 3;
        self.decryptBtn.Text := 'Decrypt';
        self.decryptBtn.UseVisualStyleBackColor := true;
        self.decryptBtn.Click += decryptBtn_Click;
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Lucida Sans Unicode', 15.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(0)));
        self.label1.Location := new System.Drawing.Point(11, 9);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(67, 29);
        self.label1.TabIndex := 4;
        self.label1.Text := 'Input';
        // 
        // label2
        // 
        self.label2.Font := new System.Drawing.Font('Lucida Sans Unicode', 15.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(0)));
        self.label2.Location := new System.Drawing.Point(12, 164);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(84, 29);
        self.label2.TabIndex := 5;
        self.label2.Text := 'Output';
        // 
        // modGroupBox
        // 
        self.modGroupBox.Controls.Add(self.customCodeBox);
        self.modGroupBox.Controls.Add(self.customCodeChk);
        self.modGroupBox.Controls.Add(self.customPhsChk);
        self.modGroupBox.Location := new System.Drawing.Point(13, 366);
        self.modGroupBox.Name := 'modGroupBox';
        self.modGroupBox.Size := new System.Drawing.Size(177, 78);
        self.modGroupBox.TabIndex := 6;
        self.modGroupBox.TabStop := false;
        self.modGroupBox.Text := 'Modifications';
        // 
        // customCodeBox
        // 
        self.customCodeBox.Enabled := false;
        self.customCodeBox.Font := new System.Drawing.Font('Microsoft Sans Serif', 11.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.customCodeBox.Location := new System.Drawing.Point(98, 46);
        self.customCodeBox.MaxLength := 6;
        self.customCodeBox.Multiline := true;
        self.customCodeBox.Name := 'customCodeBox';
        self.customCodeBox.Size := new System.Drawing.Size(68, 24);
        self.customCodeBox.TabIndex := 2;
        // 
        // customCodeChk
        // 
        self.customCodeChk.Location := new System.Drawing.Point(10, 47);
        self.customCodeChk.Name := 'customCodeChk';
        self.customCodeChk.Size := new System.Drawing.Size(104, 24);
        self.customCodeChk.TabIndex := 1;
        self.customCodeChk.Text := 'Custom code';
        self.customCodeChk.UseVisualStyleBackColor := true;
        self.customCodeChk.CheckedChanged += customCodeChk_CheckedChanged;
        // 
        // customPhsChk
        // 
        self.customPhsChk.Enabled := false;
        self.customPhsChk.Location := new System.Drawing.Point(10, 17);
        self.customPhsChk.Name := 'customPhsChk';
        self.customPhsChk.Size := new System.Drawing.Size(156, 24);
        self.customPhsChk.TabIndex := 0;
        self.customPhsChk.Text := 'Custom Phaser'#13#10;
        self.customPhsChk.UseVisualStyleBackColor := true;
        // 
        // wtfBtn
        // 
        self.wtfBtn.Location := new System.Drawing.Point(323, 451);
        self.wtfBtn.Name := 'wtfBtn';
        self.wtfBtn.Size := new System.Drawing.Size(5, 5);
        self.wtfBtn.TabIndex := 7;
        self.wtfBtn.Text := 'button1';
        self.wtfBtn.UseVisualStyleBackColor := true;
        // 
        // mainForm
        // 
        self.ClientSize := new System.Drawing.Size(328, 455);
        self.Controls.Add(self.wtfBtn);
        self.Controls.Add(self.modGroupBox);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.decryptBtn);
        self.Controls.Add(self.encryptBtn);
        self.Controls.Add(self.outputBox);
        self.Controls.Add(self.inputBox);
        self.Name := 'mainForm';
        self.Text := 'Ingenious'' Uniclue 2017';
        self.modGroupBox.ResumeLayout(false);
        self.modGroupBox.PerformLayout();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
