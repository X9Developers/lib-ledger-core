// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from thread_dispatcher.djinni

package co.ledger.core;

public abstract class Lock {
    public abstract void lock();

    public abstract boolean tryLock();

    public abstract void unlock();
}