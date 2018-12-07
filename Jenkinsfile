/* Jenkinsfile */

void clean(Closure fn) {
    deleteDir();
    try {
        fn();
    } finally {
        deleteDir();
    }
}

node('osprey || toucan') {
    stage('setup') {
        checkout(scm);
    }
    stage('configure') {
        sh 'cmake .';
    }
    stage('build') {
        sh 'make';
    }
    stage('test') {
        sh 'true';
    }
}

