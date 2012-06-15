compatability-policy {
    minimum: "1.3.0.0";
    maximum: "${OneLessThanCurrent}"; // this is the default
}

package {
    version: "${package-version}";
    location: "http://coapp.org/repository/${OutputFilename}";

    feed: "http://coapp.org/repository/packages.atom.xml";
    publisher: "CoApp Project";
}

license[BSD] {
    license-url: "http://www.libssh2.org/license.html";
    license-type: "BSD";
}

metadata {
    description: @"libssh2 - SSH2 library
======================

libssh2 is a library implementing the SSH2 protocol, available under
the revised BSD license.

Web site: http://www.libssh2.org/"; // or path to a file...
    
    author-version : "1.3.0";
    bug-tracker: "https://github.com/coapp-packages/libssh2/issues";
    stability : "0";
    licenses : {
        BSD
    };
}
