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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x985ca3e0, "single_release" },
	{ 0x4b94a99b, "seq_read" },
	{ 0x291eb36, "seq_lseek" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x2b259a46, "hwmon_device_unregister" },
	{ 0xdaa1dda5, "proc_create" },
	{ 0x7772a653, "hwmon_device_register_with_groups" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x27e1a049, "printk" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xc7f4b92, "single_open" },
	{ 0xf9a482f9, "msleep" },
	{ 0x91715312, "sprintf" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x267df662, "smp_call_on_cpu" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("dmi*:svn*DellComputer*:pn*Inspiron*:");
MODULE_ALIAS("dmi*:svn*DellComputer*:pn*Latitude*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*LatitudeD520*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Latitude*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*MM061*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*MP061*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*PrecisionWorkStation490*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Precision*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Vostro*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*XPSL421X*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Studio*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*XPS13*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*MXC051*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*XPS159560*:");

MODULE_INFO(srcversion, "A6428ADA779762239FC0E60");
MODULE_INFO(rhelversion, "8.0");
