bind_socket = "/var/lib/rspamd/rspamd-proxy.sock mode=0666";

upstream "local" {
    self_scan = yes; # Enable self-scan
}
