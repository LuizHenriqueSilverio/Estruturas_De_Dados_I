package javahash;
import java.io.*;
import java.util.*;
import javax.swing.JOptionPane;

public class FormSistema extends javax.swing.JFrame {
    HashMap<String, Pessoa> meuHash = new HashMap<>();
    LinkedList<Pessoa> minhaLista = new LinkedList<>();
    ArrayList<String> arrayBusca = new ArrayList<>();
    
    public FormSistema() {
        initComponents();
        
    }


    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        lblPessoa = new javax.swing.JLabel();
        jLabel1 = new javax.swing.JLabel();
        jPanel2 = new javax.swing.JPanel();
        txtNome = new javax.swing.JTextField();
        txtCpf = new javax.swing.JTextField();
        btnBuscarhm = new javax.swing.JButton();
        btnAddhm = new javax.swing.JButton();
        btnCarrega = new javax.swing.JButton();
        btnCarregaBusca = new javax.swing.JButton();
        buscaDados = new javax.swing.JButton();
        salvaDados = new javax.swing.JButton();
        jPanel3 = new javax.swing.JPanel();
        jScrollPane1 = new javax.swing.JScrollPane();
        listHashTable = new javax.swing.JTextArea();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setFont(new java.awt.Font("Segoe UI Light", 0, 14)); // NOI18N

        jPanel1.setBackground(new java.awt.Color(0, 102, 102));

        lblPessoa.setFont(new java.awt.Font("Segoe UI Black", 0, 48)); // NOI18N
        lblPessoa.setForeground(new java.awt.Color(255, 255, 255));
        lblPessoa.setText("Pessoa:");

        jLabel1.setIcon(new javax.swing.ImageIcon(getClass().getResource("/javahash/cryptography (1).png"))); // NOI18N

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                .addGap(45, 45, 45)
                .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 162, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(149, 149, 149)
                .addComponent(lblPessoa, javax.swing.GroupLayout.PREFERRED_SIZE, 542, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(53, 53, 53)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(lblPessoa, javax.swing.GroupLayout.PREFERRED_SIZE, 121, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel1))
                .addContainerGap(22, Short.MAX_VALUE))
        );

        jPanel2.setBackground(new java.awt.Color(255, 255, 255));
        jPanel2.setBorder(javax.swing.BorderFactory.createTitledBorder(null, "Adicionar", javax.swing.border.TitledBorder.DEFAULT_JUSTIFICATION, javax.swing.border.TitledBorder.DEFAULT_POSITION, new java.awt.Font("Segoe UI Light", 0, 24))); // NOI18N

        txtNome.setFont(new java.awt.Font("Segoe UI Light", 0, 18)); // NOI18N
        txtNome.setBorder(javax.swing.BorderFactory.createTitledBorder(null, "Nome", javax.swing.border.TitledBorder.DEFAULT_JUSTIFICATION, javax.swing.border.TitledBorder.DEFAULT_POSITION, new java.awt.Font("Segoe UI Light", 0, 18))); // NOI18N

        txtCpf.setFont(new java.awt.Font("Segoe UI Light", 0, 18)); // NOI18N
        txtCpf.setBorder(javax.swing.BorderFactory.createTitledBorder(null, "CPF", javax.swing.border.TitledBorder.DEFAULT_JUSTIFICATION, javax.swing.border.TitledBorder.DEFAULT_POSITION, new java.awt.Font("Segoe UI Light", 0, 18))); // NOI18N

        btnBuscarhm.setFont(new java.awt.Font("Segoe UI Light", 0, 18)); // NOI18N
        btnBuscarhm.setIcon(new javax.swing.ImageIcon(getClass().getResource("/javahash/task.png"))); // NOI18N
        btnBuscarhm.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnBuscarhmActionPerformed(evt);
            }
        });

        btnAddhm.setFont(new java.awt.Font("Segoe UI Light", 0, 18)); // NOI18N
        btnAddhm.setIcon(new javax.swing.ImageIcon(getClass().getResource("/javahash/clipboard.png"))); // NOI18N
        btnAddhm.setText("Adicionar Map");
        btnAddhm.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnAddhmActionPerformed(evt);
            }
        });

        btnCarrega.setFont(new java.awt.Font("Segoe UI Light", 0, 18)); // NOI18N
        btnCarrega.setIcon(new javax.swing.ImageIcon(getClass().getResource("/javahash/clipboard.png"))); // NOI18N
        btnCarrega.setText("Carrega Arquivo");
        btnCarrega.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnCarregaActionPerformed(evt);
            }
        });

        btnCarregaBusca.setFont(new java.awt.Font("Segoe UI Light", 0, 18)); // NOI18N
        btnCarregaBusca.setIcon(new javax.swing.ImageIcon(getClass().getResource("/javahash/clipboard.png"))); // NOI18N
        btnCarregaBusca.setText("Carrega Busca");
        btnCarregaBusca.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnCarregaBuscaActionPerformed(evt);
            }
        });

        buscaDados.setFont(new java.awt.Font("Segoe UI Light", 0, 18)); // NOI18N
        buscaDados.setIcon(new javax.swing.ImageIcon(getClass().getResource("/javahash/task.png"))); // NOI18N
        buscaDados.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                buscaDadosActionPerformed(evt);
            }
        });

        salvaDados.setFont(new java.awt.Font("Segoe UI Light", 0, 18)); // NOI18N
        salvaDados.setIcon(new javax.swing.ImageIcon(getClass().getResource("/javahash/task.png"))); // NOI18N
        salvaDados.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                salvaDadosActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanel2Layout = new javax.swing.GroupLayout(jPanel2);
        jPanel2.setLayout(jPanel2Layout);
        jPanel2Layout.setHorizontalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel2Layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel2Layout.createSequentialGroup()
                        .addComponent(txtNome, javax.swing.GroupLayout.PREFERRED_SIZE, 262, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(18, 18, 18)
                        .addComponent(btnBuscarhm, javax.swing.GroupLayout.PREFERRED_SIZE, 75, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(0, 0, Short.MAX_VALUE))
                    .addGroup(jPanel2Layout.createSequentialGroup()
                        .addGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addComponent(btnAddhm, javax.swing.GroupLayout.PREFERRED_SIZE, 245, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(txtCpf, javax.swing.GroupLayout.PREFERRED_SIZE, 262, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(btnCarrega, javax.swing.GroupLayout.PREFERRED_SIZE, 245, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(btnCarregaBusca, javax.swing.GroupLayout.PREFERRED_SIZE, 245, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(18, 18, 18)
                        .addGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(buscaDados, javax.swing.GroupLayout.PREFERRED_SIZE, 75, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(salvaDados, javax.swing.GroupLayout.PREFERRED_SIZE, 75, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addContainerGap(20, Short.MAX_VALUE))))
        );
        jPanel2Layout.setVerticalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel2Layout.createSequentialGroup()
                .addGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel2Layout.createSequentialGroup()
                        .addGap(33, 33, 33)
                        .addComponent(txtNome, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(jPanel2Layout.createSequentialGroup()
                        .addGap(24, 24, 24)
                        .addComponent(btnBuscarhm, javax.swing.GroupLayout.PREFERRED_SIZE, 82, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addGap(17, 17, 17)
                .addGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel2Layout.createSequentialGroup()
                        .addComponent(buscaDados, javax.swing.GroupLayout.PREFERRED_SIZE, 82, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(18, 18, 18)
                        .addComponent(salvaDados, javax.swing.GroupLayout.PREFERRED_SIZE, 82, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(0, 0, Short.MAX_VALUE))
                    .addGroup(jPanel2Layout.createSequentialGroup()
                        .addComponent(txtCpf, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(18, 18, 18)
                        .addComponent(btnAddhm, javax.swing.GroupLayout.PREFERRED_SIZE, 70, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(18, 18, 18)
                        .addComponent(btnCarrega, javax.swing.GroupLayout.PREFERRED_SIZE, 70, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 11, Short.MAX_VALUE)
                        .addComponent(btnCarregaBusca, javax.swing.GroupLayout.PREFERRED_SIZE, 70, javax.swing.GroupLayout.PREFERRED_SIZE))))
        );

        jPanel3.setBackground(new java.awt.Color(255, 255, 255));
        jPanel3.setBorder(javax.swing.BorderFactory.createTitledBorder(null, "Controle", javax.swing.border.TitledBorder.DEFAULT_JUSTIFICATION, javax.swing.border.TitledBorder.DEFAULT_POSITION, new java.awt.Font("Segoe UI Light", 0, 24))); // NOI18N

        listHashTable.setEditable(false);
        listHashTable.setColumns(20);
        listHashTable.setFont(new java.awt.Font("Segoe UI Light", 0, 24)); // NOI18N
        listHashTable.setRows(5);
        listHashTable.setBorder(javax.swing.BorderFactory.createTitledBorder(null, "Hash Table", javax.swing.border.TitledBorder.DEFAULT_JUSTIFICATION, javax.swing.border.TitledBorder.DEFAULT_POSITION, new java.awt.Font("Segoe UI Light", 0, 24))); // NOI18N
        jScrollPane1.setViewportView(listHashTable);

        javax.swing.GroupLayout jPanel3Layout = new javax.swing.GroupLayout(jPanel3);
        jPanel3.setLayout(jPanel3Layout);
        jPanel3Layout.setHorizontalGroup(
            jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel3Layout.createSequentialGroup()
                .addGap(55, 55, 55)
                .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 399, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(87, Short.MAX_VALUE))
        );
        jPanel3Layout.setVerticalGroup(
            jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel3Layout.createSequentialGroup()
                .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 413, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 24, Short.MAX_VALUE))
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jPanel2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jPanel3, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(jPanel2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(jPanel3, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents
   
    void limpaCampos() {
        txtNome.setText("");
        txtCpf.setText("");
    }
    
    void mostra() {
        listHashTable.setText("");
        if(!meuHash.isEmpty()){
            for(Map.Entry<String, Pessoa> dado:meuHash.entrySet()){
                listHashTable.append(dado.getValue() + "\n");
            }
        }
    }
    
    void carregaDados() {
        String csvFile = "dados.csv";
        String line = "";
        String[] pessoa = null;
        
        try (BufferedReader br = new BufferedReader(new FileReader(csvFile))) {
            while ((line = br.readLine()) != null) {
                pessoa = line.split(";");
                Pessoa p = new Pessoa();
                p.setNome(pessoa[0]);
                p.setCpf(pessoa[1]);
                meuHash.put(p.getCpf(), p);
                minhaLista.add(p);
                // System.out.println(p);
            }// fim percurso no arquivo
        } catch (IOException e) {
            e.printStackTrace();
        }

    }
    
    void carregaDadosBusca() {
        String csvFile = "dadosbusca.csv";
        String line = "";
        
        try(BufferedReader br = new BufferedReader(new FileReader(csvFile))) {
            while((line = br.readLine()) != null) {
                arrayBusca.add(line);
            }
            for(String s : arrayBusca) {
                System.out.println(s);
            }
        }catch(IOException e) {
            e.printStackTrace();
        }
    }
     
    
    private void btnBuscarhmActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnBuscarhmActionPerformed
        Pessoa p;
        if(!meuHash.isEmpty()){
            p = meuHash.get(txtCpf.getText());
            if(p == null){
                lblPessoa.setText("Not found");
            }else {
                lblPessoa.setText(p.getNome());
            }
        }
    }//GEN-LAST:event_btnBuscarhmActionPerformed

    private void btnAddhmActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnAddhmActionPerformed
        Pessoa p = new Pessoa();
        
        p.setNome(txtNome.getText().trim());
        p.setCpf(txtCpf.getText().trim());
        
        meuHash.put(p.getCpf(), p);
        limpaCampos();
        mostra();
    }//GEN-LAST:event_btnAddhmActionPerformed

    private void btnCarregaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnCarregaActionPerformed
        carregaDados();
        mostra();
    }//GEN-LAST:event_btnCarregaActionPerformed

    private void btnCarregaBuscaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnCarregaBuscaActionPerformed
        carregaDadosBusca();
        mostra();
    }//GEN-LAST:event_btnCarregaBuscaActionPerformed

    private void buscaDadosActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_buscaDadosActionPerformed
        if(meuHash.isEmpty()) {
            JOptionPane.showMessageDialog(null, "Lista de CPFs vazia!");
            return;
        }
        
        if(arrayBusca.isEmpty()) {
            JOptionPane.showMessageDialog(null, "Lista de Busca vazia!");
            return;
        }
        
        int qtd = 0;
        
        int tempoInicial = (int) System.currentTimeMillis();
        
        for(String s : arrayBusca) {
            if(meuHash.containsKey(s)) {
                qtd++;
            }
        }
        
        int tempoFinal = (int) System.currentTimeMillis();
        
        JOptionPane.showMessageDialog(null, "Busca por Hashmap:\n" + 
                                      "Total de CPFs encontrados: " + qtd + "\n" +
                                      "Tempo de busca: " + (tempoFinal - tempoInicial) / 1000.00);
        /*System.out.println("Busca Por HashMap:");
        System.out.println("Total de CPFs encontrados: " + qtd);
        System.out.printf("Tempo de busca: %.2f segundos", (tempoFinal - tempoInicial) / 1000.00);*/
        
        tempoInicial = (int) System.currentTimeMillis();
        qtd = 0;
        for(String s : arrayBusca) {
            for(Pessoa p : minhaLista) {
                if(p.getCpf().equals(s)) {
                    qtd++;
                }
            }
        }
        
        tempoFinal = (int) System.currentTimeMillis();
        
        JOptionPane.showMessageDialog(null, "Busca por Hashmap:\n" + 
                                      "Total de CPFs encontrados: " + qtd + "\n" +
                                      "Tempo de busca: " + (tempoFinal - tempoInicial) / 1000.00);
        
        /*System.out.println("");
        System.out.println("Busca por LinkedList:");
        System.out.println("Total de CPFs encontrados: " + qtd);
        System.out.printf("Tempo de busca: %.2f segundos", (tempoFinal - tempoInicial) / 1000.00);*/
    }//GEN-LAST:event_buscaDadosActionPerformed

    private void salvaDadosActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_salvaDadosActionPerformed
        String csvFile = "dadosComparados.csv";
        
        try {
            BufferedWriter bw = new BufferedWriter(new FileWriter(csvFile));
            for(String s : arrayBusca) {
                if(meuHash.containsKey(s)){
                    bw.write(s);
                }
            }
            bw.newLine();
        }catch(IOException ex) {
            JOptionPane.showMessageDialog(null, "Não foi possivel salvar o arquivo!");
        }
    }//GEN-LAST:event_salvaDadosActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(FormSistema.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(FormSistema.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(FormSistema.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(FormSistema.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new FormSistema().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btnAddhm;
    private javax.swing.JButton btnBuscarhm;
    private javax.swing.JButton btnCarrega;
    private javax.swing.JButton btnCarregaBusca;
    private javax.swing.JButton buscaDados;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JPanel jPanel3;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JLabel lblPessoa;
    private javax.swing.JTextArea listHashTable;
    private javax.swing.JButton salvaDados;
    private javax.swing.JTextField txtCpf;
    private javax.swing.JTextField txtNome;
    // End of variables declaration//GEN-END:variables
}
