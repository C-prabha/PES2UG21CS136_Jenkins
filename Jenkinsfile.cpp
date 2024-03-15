
pipeline {
    agent any
    
    stages {
        stage('Build') {
            steps {
                // Commands for building the project
                echo 'Building the project...'
                sh 'mvn clean install' // Assuming Maven is used for building
            }
        }
        stage('Test') {
            steps {
                // Commands for running tests
                echo 'Running tests...'
                sh 'mvn test' // Assuming Maven is used for running tests
            }
        }
        stage('Deploy') {
            steps {
                // Commands for deployment
                echo 'Deploying the project...'
                sh 'ansible-playbook deploy.yml' // Assuming Ansible is used for deployment
            }
        }
    }
    
    post {
        always {
            // Display 'pipeline failed' if any of the stages failed
            echo 'Pipeline failed'
        }
    }
}
