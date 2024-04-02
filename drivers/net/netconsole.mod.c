#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0xe9b41467, "param_ops_string" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x3c173b08, "configfs_unregister_subsystem" },
	{ 0xdc606e36, "unregister_console" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x63dbb9c4, "configfs_register_subsystem" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xeb9a02d7, "config_group_init" },
	{ 0x85df9b6c, "strsep" },
	{ 0xfa75a022, "netpoll_parse_options" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xae69b472, "config_item_init_type_name" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa07a37f0, "memchr" },
	{ 0x4d020cd, "netpoll_send_udp" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xcaaae3da, "register_console" },
	{ 0x56e78bd1, "netpoll_cleanup" },
	{ 0x79d4aed7, "netpoll_setup" },
	{ 0x4cbac3d, "netpoll_print_options" },
	{ 0x373db350, "kstrtoint" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x4841bdee, "strnchr" },
	{ 0x28318305, "snprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x652032cb, "mac_pton" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x27e1a049, "printk" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd81ce50c, "__netpoll_cleanup" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x5d70e794, "config_item_put" },
	{ 0x34559e57, "config_item_get" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "38F043671507F3C3A263F73");
MODULE_INFO(rhelversion, "8.0");
