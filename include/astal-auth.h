#ifndef ASTAL_AUTH_PAM_H
#define ASTAL_AUTH_PAM_H

#include <gio/gio.h>
#include <glib-object.h>

G_BEGIN_DECLS

#define ASTAL_AUTH_TYPE_PAM (astal_auth_pam_get_type())

G_DECLARE_FINAL_TYPE(AstalAuthPam, astal_auth_pam, ASTAL_AUTH, PAM, GObject)

void astal_auth_pam_set_username(AstalAuthPam *self, const gchar *username);

const gchar *astal_auth_pam_get_username(AstalAuthPam *self);

void astal_auth_pam_set_service(AstalAuthPam *self, const gchar *service);

const gchar *astal_auth_pam_get_service(AstalAuthPam *self);

gboolean astal_auth_pam_start_authenticate(AstalAuthPam *self);

void astal_auth_pam_supply_secret(AstalAuthPam *self, const gchar *secret);

gboolean astal_auth_pam_authenticate(const gchar *password, GAsyncReadyCallback result_callback,
                                     gpointer user_data);

gssize astal_auth_pam_authenticate_finish(GAsyncResult *res, GError **error);

G_END_DECLS

#endif  // !ASTAL_AUTH_PAM_H
