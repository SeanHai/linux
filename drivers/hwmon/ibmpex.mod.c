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
	{ 0xcc6f4a0c, "ipmi_smi_watcher_unregister" },
	{ 0x2e39c545, "ipmi_smi_watcher_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x29686856, "hwmon_device_register" },
	{ 0xe6478472, "_dev_info" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xc4d9f382, "ipmi_create_user" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0x29361773, "complete" },
	{ 0xd1f579d0, "ipmi_free_recv_msg" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xf388b18b, "ipmi_destroy_user" },
	{ 0x2b259a46, "hwmon_device_unregister" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x4c2054d7, "ipmi_request_settime" },
	{ 0xe4f4665b, "ipmi_validate_addr" },
	{ 0x91715312, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipmi_msghandler";


MODULE_INFO(srcversion, "1AB53371564158E839615FF");
MODULE_INFO(rhelversion, "8.0");
