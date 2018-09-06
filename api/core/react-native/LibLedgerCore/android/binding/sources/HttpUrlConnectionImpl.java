// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from http_client.djinni

package co.ledger.core;

import java.util.HashMap;

/**Class representing an Http connection */
public class HttpUrlConnectionImpl extends HttpUrlConnection {
    /**
     * Gets the HTTP response status code
     * @return The HTTP response status code
     */
    public int getStatusCode() {
    	return 0;
    }

    /**
     * Gets the HTTP response status text
     * @return The HTTP response status text
     */
    public String getStatusText() {
    	return "";
    }

    /**
     * Gets the HTTP response headers
     * @return The HTTP response headers
     */
    public HashMap<String, String> getHeaders() {
    	return null;
    }

    /**
     * Reads available HTTP response body. This method will be called multiple times until it returns a empty bytes array.
     * @returns A chunk of the body data wrapped into a HttpReadBodyResult (for error management)
     */
    public HttpReadBodyResult readBody() {
    	return null;
    }
}