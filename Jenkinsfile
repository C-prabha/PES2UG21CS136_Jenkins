pipeline {
    agent any
    stages {
        // stage('Clone repository') {
        //     steps {
        //         checkout([$class: 'GitSCM', branches: [[name: '*/main']], userRemoteConfigs: [[url: 'https://github.com/C-prabha/PES2UG21CS136_Jenkins']]])
        //     }
        // }
        stage('Build') {
            steps {
                build 'PES1UG21CS136-1'
                sh 'g++ main.cpp -o output'
            }
        }
        stage('Test') {
            steps {
                // Assuming you have test steps here. Adjust accordingly.
                sh './output'
            }
        }
        stage('Deploy') {
            steps {
                echo 'deploy'
                // Assuming you have deployment steps here. Adjust accordingly.
            }
        }
    }
    post {
        failure {
            echo 'Pipeline failed'
            // You can add additional actions to take upon failure here.
        }
    }
}